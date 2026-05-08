#include <stdio.h>
#include <math.h>

int main() {

  int totalshops;
  int shopprices[ 100 ];

  int issuccess = scanf( "%d\n" , &totalshops );

  if ( issuccess == 0 ) {
    return 1;
  }

  for ( int i = 0 ; i < totalshops ; i++ ) {

    int price;
    int issuccess2 = scanf( "%d\n" , &price );

    if ( issuccess2 == 0 ) {
      return 1;
    }

    shopprices[ i ] = price;

  } 

  int sums[ totalshops * totalshops ];
  int totalsums = 0;

  for ( int from = 0 ; from < totalshops ; from++ ) {

    int sum = 0;

    for ( int shopindex = from ; shopindex < totalshops ; shopindex++ ) {

      sum += shopprices[ shopindex ];

      int isalreadyinsums = 0;

      for ( int sumsindex = 0 ; sumsindex < totalsums ; sumsindex++ ) {

        int checksum = sums[ sumsindex ];
        isalreadyinsums = isalreadyinsums || sum == checksum;

      }

      if ( isalreadyinsums == 0 ) {
        sums[ totalsums ] = sum;
        totalsums += 1;
      }

    }

  }

  printf( "%d\n" , totalsums );

  return 0;

}
