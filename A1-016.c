#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  char id[] = "12345678";

  int issucesss1 = scanf( "%s\n" , id );
  if ( issucesss1 != 1 ) {
    return 0;
  }

  char thirddigit = id[ 2 ];
  char forthdigit = id[ 3 ];

  if ( thirddigit == '1' && forthdigit == '6' ) {
    printf( "yes" );
  }
  else {
    printf( "no" );
  }

  return 0;

}
