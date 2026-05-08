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

  int isallsame = num1 == num2 && num2 == num3;
  int isneither = num1 == num2 || num2 == num3 || num1 == num3;

  if ( isallsame ) {
    printf( "all the same" );
  }
  else if( isneither ) {
    printf( "neither" );
  }
  else {
    printf( "all different" );
  }

  return 0;

}
