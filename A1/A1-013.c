#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  char safechar = 'H';
  int safeint = 4567;

  char checkchar;
  int checkint;

  int issucesss1 = scanf( "%c\n" , &checkchar );
  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%d\n" , &checkint );
  if ( issucesss2 != 1 ) {
    return 0;
  }

  int iscorrectint = checkint == safeint;
  int iscorrectchar = checkchar == safechar;

  if ( iscorrectint && iscorrectchar ) {
    printf( "safe unlocked" );
  }
  else if ( iscorrectint ) {
    printf( "safe locked - change char" );
  }
  else if ( iscorrectchar ) {
    printf( "safe locked - change digit" );
  }
  else  {
    printf( "safe locked" );
  }

  return 0;

}
