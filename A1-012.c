#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

  char strnum[] = "--";
  char op = '-';

  int issucesss1 = scanf( "%s\n" , strnum );
  if ( issucesss1 != 1 ) {
    return 0;
  }

  int issucesss2 = scanf( "%c\n" , &op );
  if ( issucesss2 != 1 ) {
    return 0;
  }

  char strnuminverse[] = "--";
  strnuminverse[ 0 ] = strnum[ 1 ];
  strnuminverse[ 1 ] = strnum[ 0 ];

  int firstnum;
  int secondnum;
  int result;

  sscanf( strnum , "%d" , &firstnum );
  sscanf( strnuminverse , "%d" , &secondnum );

  if ( op == '+' ) {
      result = secondnum + firstnum;
  }
  else {
      result = secondnum * firstnum;
  }

  printf( "%d %c %d = %d" , firstnum , op , secondnum , result );

  return 0;

}
