#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  char firstname[] = "---------------";
  char lastname[] = "---------------";
  char age[] = "00";

  int issucesss1 = scanf( "%s\n" , firstname );
  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%s\n" , lastname );
  if ( issucesss2 != 1 ) {
    return 0;
  }

  int issucesss3 = scanf( "%s\n" , age );
  if ( issucesss3 != 1 ) {
    return 0;
  }

  int isbothmorethan5character = strlen( firstname ) > 5 && strlen( lastname ) > 5;

  if ( isbothmorethan5character ) {
    printf( "%c%c%c%c" , firstname[ 0 ] , firstname[ 1 ] , lastname[ strlen( lastname ) - 1 ] , age[ 1 ] );
  }
  else {
    printf( "%c%c%c%c" , firstname[ 0 ] , age[ 0 ] , age[ 1 ] , lastname[ strlen( lastname ) - 1 ] );
  }

  return 0;

}
