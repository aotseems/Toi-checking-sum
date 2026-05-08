#include <stdio.h>
#include <math.h>

int main() {

  int width = 11;
  int length = 4;
  int min = 3;
  int max = 3;

  int issuccess = scanf( "%d\n" , &width );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess1 = scanf( "%d\n" , &length );

  if ( issuccess1 == 0 ) {
    return 1;
  }

  int issuccess2 = scanf( "%d\n" , &min );

  if ( issuccess2 == 0 ) {
    return 1;
  }

  int issuccess3 = scanf( "%d\n" , &max );

  if ( issuccess3 == 0 ) {
    return 1;
  }

  int minspace = -1;

  for ( int boxlength = min ; boxlength <= max ; boxlength++ ) {

    int newspace = ( width % boxlength ) * ( length % boxlength );
    if ( newspace < minspace || minspace == -1 ) {
      minspace = newspace;
    }

  }

  printf( "%d\n" , minspace );

  return 0;

}
