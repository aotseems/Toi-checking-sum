#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  float monthsdiff = 3;

  char* seasons[] = { "winter" , "spring" , "summer" , "fall" };

  int changeday = 21;

  int month;
  int day;

  int issucesss1 = scanf( "%d\n" , &month );

  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%d\n" , &day );

  if ( issucesss2 != 1 ) {
    return 0;
  }

  int isonchangeday = 0;

  if ( day < changeday ) {
    isonchangeday = 1;
  }

  int newmonth = month - isonchangeday;

  if ( newmonth < 1 ) {
    newmonth = 12;
  }

  if ( newmonth > 12 ) {
    newmonth = 1;
  }

  if ( newmonth == 1 || newmonth == 2 || newmonth == 3 ) {
    printf( "winter" );
  }
  if ( newmonth == 4 || newmonth == 5 || newmonth == 6 ) {
    printf( "spring" );
  }
  if ( newmonth == 7 || newmonth == 8 || newmonth == 9 ) {
    printf( "summer" );
  }
  if ( newmonth == 10 || newmonth == 11 || newmonth == 12 ) {
    printf( "fall" );
  }

  //int monthindex = ceil( ( newmonth - 1 ) / 11 * 3 );

  //printf( "%d\n" , newmonth );
  //printf( "%s" , seasons[ monthindex ] );


  return 0;

}
