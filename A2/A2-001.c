#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void createmc( int x1 , int x2 , int y1 , int y2 , int mc[] ) {

  int dx = x2 - x1;
  int dy = y2 - y1;
  int m = dy/dx;
  int c = y1 - ( m * x1 );

  mc[ 0 ] = m;
  mc[ 1 ] = c;

}

void createchunks( int size , int pos[] , int chunks[][ 2 ] ) {

  int firstchunk[ 2 ] = { 0 , 1 };

  createmc( 0 , pos[ 0 ] , 0 , 1 , firstchunk );

  chunks[ 0 ] = firstchunk;

  for ( int index = 1 ; index < size ; index++ ) {

    int lastindex = index - 1;
    int x1 = pos[ lastindex ];
    int x2 = pos[ index ];
    int y1 = index % 2;
    int y2 = lastindex % 2;

    int newchunks[ 2 ];
    createmc( 0 , pos[ 0 ] , 0 , 1 , newchunks );

    chunks[ index ] = newchunks;
    
  }
}

int main() {

  int trr;
  int tbr;

  int issucesss1 = scanf( "%d\n" , &trr );
  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%d\n" , &tbr );
  if ( issucesss2 != 1 ) {
    return 0;
  }

  int xposred[ trr ] = {};
  int xposblue[ tbr ] = {};

  for ( int i = 0 ; i < trr ; i++ ) {

    int issucesss2 = scanf( "%d" , &xposred[ i ] );
    if ( issucesss2 != 1 ) {
      return 0;
    }

  }
  printf( "\n" );
  for ( int i = 0 ; i < tbr ; i++ ) {

    int issucesss2 = scanf( "%d" , &xposblue[ i ] );
    if ( issucesss2 != 1 ) {
      return 0;
    }

  }

  int redchunks[ trr ][ 2 ] = {};
  int bluechunks[ tbr ][ 2 ] = {};

  createchunks( trr , xposred , redchunks );
  createchunks( tbr , xposblue , bluechunks );

}
