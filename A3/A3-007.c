#include <stdio.h>
#include <math.h>

int main() {

  int tilesize;
  int totaltiles;

  int issuccess = scanf( "%d\n" , &tilesize );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess1 = scanf( "%d\n" , &totaltiles );

  if ( issuccess1 == 0 ) {
    return 1;
  }

  int sumsN = ceil( ( sqrt( 1 + 8 * totaltiles ) - 1 ) / ( 2 * tilesize ) ) ;

  printf( "%d\n" , sumsN );

  return 0;

}
