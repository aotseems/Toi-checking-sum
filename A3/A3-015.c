#include <stdio.h>
#include <math.h>

int swap( int* a , int* b ) {

  *b = *b ^ *a;
  *a = *b ^ *a;
  *b = *b ^ *a;

}

void sort( int array[] , int length ) {

  for ( int x = 0 ; x < length ; x++ ) {
    for ( int y = 0 ; y < length ; y++ ) {
      if ( array[ x ] < array[ y ] ) {
        swap( &array[ y ] , &array[ x ] );
      }
    }
  }
}

int main() {

  int totalpoles;
  int poles[ 1000 ];

  int issuccess = scanf( "%d\n" , &totalpoles );

  if ( issuccess == 0 ) {
    return 1;
  }

  for ( int i = 0 ; i < totalpoles ; i++ ) {

    int height;
    int issuccess1 = scanf( "%d\n" , &height );

    if ( issuccess1 == 0 ) {
      return 1;
    }

    poles[ i ] = height;

  }


  sort( poles , totalpoles );

  int distance = 0;

  for ( int index = 0 ; index < totalpoles ; index++ ) {
    distance += ( totalpoles - index ) * poles[ index ];
  }

  printf( "%d\n" , distance * 2 );

  return 0;
}
