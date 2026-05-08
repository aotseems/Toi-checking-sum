#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  char character;

  int issucesss = scanf( "%c\n" , &character );

  if ( issucesss != 1 ) {
    return 0;
  }

  if ( character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ) {
    printf( "yes" );
  }
  else {
    printf( "no" );
  }

  return 0;

}
