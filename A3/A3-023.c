#include <stdio.h>
#include <math.h>
#include <time.h>

int FindPrimesUnilRange( int range , int primes[] ) {

  int currentprimesindex = 1;
  primes[ 0 ] = 2;

  for ( int num = 3 ; num <= range ; num += 2 ) {

    int isdivisable = 0;

    for ( int checknumindex = 0 ; checknumindex < currentprimesindex ; checknumindex++ ) {

      int checkprime = primes[ checknumindex ];

      if ( checkprime * checkprime > num )
              break;

      if ( num % checkprime == 0 ) {

        isdivisable = 1;
        break;

      }
    }

    if ( isdivisable == 0 ) {

      primes[ currentprimesindex ] = num;
      currentprimesindex++;

    }

  }

  return currentprimesindex;

}

int main() {

  /* here, do your time-consuming job */

  int minrange;
  int maxrange;

  int issuccess = scanf( "%d\n" , &minrange );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess2 = scanf( "%d\n" , &maxrange );

  if ( issuccess2 == 0 ) {
    return 1;
  }

  int minprime = minrange * 3;
  int maxprime = maxrange * 3;

  int primes[ maxprime ];

  clock_t begin = clock();
  int primeslength = FindPrimesUnilRange( maxprime , primes );

  int totaladdableprime = 0;
  int totalthrow = 0;

  for ( int primenumindex = 0 ; primenumindex < primeslength ; primenumindex++ ) {

    int prime = primes[ primenumindex ];

    if ( prime < minprime ) {
      continue;
    }

    if ( prime > maxprime ) {
      break;
    }

    int doubleminrange = minrange * 2;

    int minnum1 = prime - maxrange * 2;
    if ( minrange > minnum1 ) {
      minnum1 = minrange;
    }

    int maxnum1 = prime - doubleminrange;
    if ( minrange > maxnum1 ) {
      maxnum1 = minrange;
    }

    for ( int num1 = minnum1 ; num1 <= maxnum1 ; num1++ ) {

      int maxnum2 = ( prime - num1 ) / 2;
      if ( maxnum2 < num1 )
                 continue;

      for ( int num2 = num1 ; num2 <= maxnum2 ; num2++ ) {

        int num3 = prime - ( num1 + num2 );

        if ( num3 >= num2 && num3 <= maxrange ) {
            totaladdableprime++;
        }

      }

    }

  }

  clock_t end = clock();
  double timespent = (double)(end - begin) / CLOCKS_PER_SEC;
  //printf( "time : %f\n" , timespent );
  //printf( "%d\n" , totalthrow );
  printf( "%d\n" , totaladdableprime );

  return 0;

}
