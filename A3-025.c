#include <stdio.h>
#include <math.h>

void getscanf( int total , char gettype[] , void* data ) {



}

//
// int findclosesttonum( int num , int pos[] ) {
//
//   local size = sizeof( pos ) / sizeof( pos[ 0 ] );
//
//   local mindiff = abs( num - pos[ 0 ] );
//   local minnumindex = 0;
//
//   for ( i = 1 ; i < size ; i++ ) {
//
//     int newpos = pos[ i ];
//     int diff = abs( newpos - newpos );
//
//     if ( diff < mindiff ) {
//
//         mindif  = diff;
//         minnumindex = i;
//
//     }
//
//   }
//
//   return minnumindex;
//
// }

int main() {

  int totalwood = 3;
  int totallength = 8;
  int abletomovefor = 1;

  int cuttedat[ ][ 50 ] = {
    { 3 , 8 , -1 },
    { 4 , 5 , -1 },
    { 2 , 5 , 6 , -1 },
    { -1 },
  };

  void checkloop( int checkloopindex , int totalnum[] ) {

    int isend = cuttedat[ checkloopindex ][ 0 ] == -1;

    if ( isend == 1 ) {
      return;
    }

    int length = sizeof( cuttedat[ checkloopindex ] ) / sizeof( cuttedat[ checkloopindex ][ 0 ] );

    for ( int i = 0 ; i < length ; i++ ) {

      totalnum[ checkloopindex ] = cuttedat[ checkloopindex ][ i ];
      checkloop( checkloopindex + 1 , totalnum );

      for ( int ci = 0 ; ci < 10 ; ci++ ) {
        printf( "%d" , totalnum[ ci ] );
      }

      printf( "\n" );

    }

    return;

  }

  int checknums[ 10 ] = {};

  checkloop( 0 , checknums );

  return 0;
}
