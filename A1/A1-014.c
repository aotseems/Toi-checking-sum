#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int num1;
  int num2;
  int num3;

  int issucesss1 = scanf( "%d\n" , &num1 );
  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%d\n" , &num2 );
  if ( issucesss2 != 1 ) {
    return 0;
  }

  int issucesss3 = scanf( "%d\n" , &num3 );
  if ( issucesss3 != 1 ) {
    return 0;
  }

  int checknums[] = { num1 , num2 , num3 };
  int min;

  for ( int i = 0 ; i < 3 ; i++ ) {

      int checknum = checknums[ i ];

      if ( i == 0 ) {
        min = checknum;
        continue;
      }

      if ( checknum < min ) {
        min = checknum;
      }

  }

  printf( "%d" , min );

  return 0;

}
