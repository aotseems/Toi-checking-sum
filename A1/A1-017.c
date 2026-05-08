#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int y1 , m1 , d1;
  int y2 , m2 , d2;

  int issucesss1 = scanf( "%d\n" , &y1 );
  if ( issucesss1 != 1 ) {
    return 0;
  }
  int issucesss2 = scanf( "%d\n" , &m1 );
  if ( issucesss2 != 1 ) {
    return 0;
  }
  int issucesss3 = scanf( "%d\n" , &d1 );
  if ( issucesss3 != 1 ) {
    return 0;
  }
  int issucesss4 = scanf( "%d\n" , &y2 );
  if ( issucesss4 != 1 ) {
    return 0;
  }
  int issucesss5 = scanf( "%d\n" , &m2 );
  if ( issucesss5 != 1 ) {
    return 0;
  }
  int issucesss6 = scanf( "%d\n" , &d2 );
  if ( issucesss6 != 1 ) {
    return 0;
  }

  if ( y1 == y2 && m1 == m2 && d1 == d2 ) {

    printf( "0" );
    return 0;

  }
  int checkfor[ 3 ][ 2 ] = { { y1 , y2 } , { m1 , m2 } , { d1 , d2 } };

  for ( int i = 0 ; i < 3 ; i++ ) {

    int v1 = checkfor[ i ][ 0 ];
    int v2 = checkfor[ i ][ 1 ];

    if ( v1 == v2 ) {
      continue;
    }
    else if ( v1 < v2 ) {
      printf( "1" );
      break;
    }
    else if ( v1 > v2 ) {
      printf( "2" );
      break;
    }

  }

  return 0;

}
