#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int num;

  int issucesss1 = scanf( "%d\n" , &num );
  if ( issucesss1 != 1 ) {
    return 0;
  }

  char romannum[][ 4 ] = {
    "I" , "II" , "III" , "IV" , "V" , "VI" , "VII" , "VIII" , "XI"
  };

  if ( num > 9 || num == 0 ) {
    printf( "Error : Out of range" );
    return 0;
  }
  if ( num < 0 ) {
    printf( "Error : Please input positive number" );
    return 0;
  }

  printf( "%s\n" , romannum[ num - 1 ] );

  return 0;

}
