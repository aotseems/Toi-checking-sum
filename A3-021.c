#include <stdio.h>
#include <math.h>

int main() {


  int totalrunners;
  int round;
  int runners[ 100000 ];

  int issuccess = scanf( "%d\n" , &totalrunners );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess1 = scanf( "%d\n" , &round );

  if ( issuccess1 == 0 ) {
    return 1;
  }

  int mintime = 100000000;

  for ( int i = 0 ; i < totalrunners ; i++ ) {

    int t;
    int issuccess2 = scanf( "%d\n" , &t );

    if ( issuccess2 == 0 ) {
      return 1;
    }

    runners[ i ] = t;

    if ( t < mintime ) {
      mintime = t;
    }

  }

  int fastesttime = mintime * round;
  int passedrunners = 0;

  for ( int runnerindex = 0 ; runnerindex < totalrunners ; runnerindex++ ) {

    int secondperround = runners[ runnerindex ];
    double totallaps = ( double )fastesttime / ( double )secondperround;

    if ( totallaps > ( double )( round - 1 ) ) {
      passedrunners++;
    }

  }

  printf( "%d\n" , passedrunners );

  return 0;

}
