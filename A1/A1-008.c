#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  char characters[ 100 ];

  int issucesss = scanf( "%s\n" , &characters );

  if ( issucesss != 1 ) {
    return 0;
  }

  int size = strlen( characters );

  if ( size == 13 ) {
    printf( "yes" );
  }
  else {
    printf( "no" );
  }

  return 0;

}
