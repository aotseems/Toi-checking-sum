#include <stdio.h>
#include <math.h>

int main() {

  int totaldistance;
  int totalmoutains;
  int moutainheights[ 300 ];

  int issuccess = scanf( "%d\n" , &totalmoutains );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess1 = scanf( "%d\n" , &totaldistance );

  if ( issuccess1 == 0 ) {
    return 1;
  }

  for ( int i = 0 ; i < totalmoutains ; i++ ) {

    int height;
    int issuccess2 = scanf( "%d\n" , &height );

    if ( issuccess2 == 0 ) {
      return 1;
    }

    moutainheights[ i ] = height;

  }

  int mindistance = 0;
  int maxdistance = 0;

  for ( int index = 0 ; index < totalmoutains ; index++ ) {

    int height = moutainheights[ index ];

    if ( height % 4 == 0 ^ height % 3 == 0 ) {

      int distance;

      if ( height % 4 == 0 ) {
        distance = height / 4 * 5 * 2;
      }

      if ( height % 3 == 0 ) {
        distance = height / 3 * 5 * 2;
      }

      mindistance += distance;
      maxdistance += distance;

    }

    if ( height % 4 == 0 && height % 3 == 0 ) {

      mindistance += height / 4 * 5 * 2;
      maxdistance += height / 3 * 5 * 2;

    }

  }

  printf( "%d %d\n" , totaldistance - maxdistance , totaldistance - mindistance );

}
