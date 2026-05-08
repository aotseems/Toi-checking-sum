#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int score1;
  int score2;

  int issucesss1 = scanf( "%d\n" , &score1 );

  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%d\n" , &score2 );

  if ( issucesss2 != 1 ) {
    return 0;
  }

  int totalscore = score1 + score2;
  printf( "%d\n" , totalscore );
  if ( totalscore >= 50 ) {
    printf( "pass" );
  }
  else {
    printf( "fail" );
  }

  return 0;

}
