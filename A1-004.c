#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int maxscores[ 3 ] = { 10 , 40 , 50 };

  for ( int i = 0 ; i < 3 ; i++ ) {

    float score;
    int issucesss = scanf( "%f" , &score );

    if ( issucesss != 1 ) {
      return 0;
    }

    float maxscore = maxscores[ i ];
    float percent = score / maxscore * 100;

    if ( percent < 50 ) {
      printf( "fail" );
      return 0;
    }

  }

  printf( "pass" );

  return 0;
}
