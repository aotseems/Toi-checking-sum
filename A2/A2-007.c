#include <stdio.h>
#include <math.h>

int main() {

  int totalboxes = 7;
  int boxes[][ 2 ] = {
    { 1 , 5 },
    { 2 , 3 },
    { 6 , 16 },
    { 7 , 10 },
    { 11 , 15 },
    { 13 , 14 },
    { 17 , 20 }
  };

  int totalneededboxes = 3;
  int neededboxes[] = { 2 , 4 , 6 };

  int parentboxes[ totalboxes ][ totalboxes ];
  int parentboxesindex[ totalboxes ];

  for ( int i = 0 ; i < totalboxes ; i++ ) {
    parentboxesindex[ i ] = 0;
  }

  for ( int needboxindexindex = 0 ; needboxindexindex < totalneededboxes ; needboxindexindex++ ) {

    int needboxindex = neededboxes[ needboxindexindex ];

    int needboxa = boxes[ needboxindex ][ 0 ];
    int needboxb = boxes[ needboxindex ][ 1 ];

    int parentindex = needboxindex;
    int parentindexsize = needboxb - needboxa;

    for ( int boxindex = 0 ; boxindex < totalboxes ; boxindex++ ) {

      if ( boxindex == needboxindex ) {
        continue;
      }

      int boxa = boxes[ boxindex ][ 0 ];
      int boxb = boxes[ boxindex ][ 1 ];

      if ( boxa < needboxa && boxb > needboxb ) {

        int checksize = boxb - boxa;

        if ( checksize > parentindexsize ) {

          parentindexsize = checksize;
          parentindex = boxindex;

        }

      }

    }

    int currentindex = parentboxesindex[ parentindex ];
    parentboxes[ parentindex ][ currentindex ] = needboxindex;
    parentboxesindex[ parentindex ]++;

  }

  int totalbox = 0;
  int movedboxes[ 1000 ];

  for ( int i = 0 ; i < totalboxes ; i++ ) {

    int idk = parentboxesindex[ i ];

    if ( idk > 0 ) {
      printf("%d\n" , parentboxes[ i ][ 0 ] );
      if ( idk == 1 ) {
        movedboxes[ totalbox ] = parentboxes[ i ][ 0 ];
      }
      else {
        movedboxes[ totalbox ] = i;
      }

      totalbox++;

    }

  }

  printf( "%d\n" , totalbox );

  for ( int i = 0 ; i < totalbox ; i++ ) {
    printf( "%d " , movedboxes[ i ] );
  }

  return 0;

}
