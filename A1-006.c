#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int v1;
  int v2;

  int issucesss1 = scanf( "%d\n" , &v1 );

  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%d\n" , &v2 );

  if ( issucesss2 != 1 ) {
    return 0;
  }

  int isdivisable = v1 % v2 == 0;

  if ( isdivisable == 1 ) {
    printf( "yes" );
  }
  else {
    printf( "no" );
  }

  return 0;

}
