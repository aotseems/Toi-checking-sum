#include <stdio.h>
#include <string.h>

int main( ) {

  char words[ 100 ];

  int issuccess = scanf( "%s" , &words );

  if ( issuccess != 1 ) {
    return 0;
  }

  int length = strlen( words );

  char wordindex[ 10 ] = {};
  int totalword[ 10 ] = {};

  for ( int i = 0 ; i < 10 ; i++ ) {
    wordindex[ i ] = '_';
    totalword[ i ] = 0;
  }

  for ( int charindex = 0 ; charindex < length ; charindex++ ) {

    char character = words[ charindex ];
    int addedindex = 0;

    for ( int findindex = 0 ; findindex < 10 ; findindex++ ) {

        char checkcharacter = wordindex[ findindex ];
        addedindex = findindex;

        if ( checkcharacter == '_' ) {
          break;
        }

        if ( checkcharacter == character ) {
          addedindex = findindex;
          break;
        }

    }

    wordindex[ addedindex ] = character;
    totalword[ addedindex ] = totalword[ addedindex ] + 1;

  }

  for ( int i = 0 ; i < 10 ; i++ ) {

    char character = wordindex[ i ];
    int total = totalword[ i ];

    if ( character == '_' ) {
      break;
    }

    printf( "%d%c" , total , character );

  }

  return 0;
}
