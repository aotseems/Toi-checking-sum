#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int max;

  for ( int i = 0 ; i < 3 ; i++ ) {

    int getvalue;
    int issucesss = scanf( "%d\n" , &getvalue );

    if ( issucesss != 1 ) {
      return 0;
    }

    if ( i == 0 ) {
      max = getvalue;
    }

    if ( getvalue > max ) {
      max = getvalue;
    }

  }

  printf( "%d" , max );

  return 0;

}
