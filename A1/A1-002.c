#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  int need;
  int issuccess = scanf( "%d" , &need );

  if ( issuccess != 1 ) {
    return 0;
  }

  int baht10 = floor( need / 10 );
  int baht5 = floor( ( need - ( baht10 * 10 ) ) / 5 );
  int baht2 = floor( ( need - ( baht5 * 5 ) - ( baht10 * 10 ) ) / 2 );
  int baht1 = floor( ( need - ( baht2 * 2 ) - ( baht5 * 5 ) - ( baht10 * 10 ) ) );

  printf( "10 = %d\n5 = %d\n2 = %d\n1 = %d\n" , baht10 , baht5 , baht2 , baht1 );

  return 0;

}
