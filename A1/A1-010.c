#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int age;
  char status;

  int issucesss1 = scanf( "%d\n" , &age );

  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%c\n" , &status );

  if ( issucesss2 != 1 ) {
    return 0;
  }

  int isappliablefor20 = age < 18 || status == 'S' || status == 's';

  if ( isappliablefor20 == 1 ) {
    printf( "20" );
  }
  else {
    printf( "50" );
  }

  return 0;

}
