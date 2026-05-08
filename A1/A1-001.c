#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* test1[ 2 ] = { "Keth" , "Perry" };
char* test2[ 2 ] = { "Alex" , "Goot" };

void getfirsttwocharacterofname( char* name , char* getname ) {

  getname[ 0 ] = name[ 0 ];
  getname[ 1 ] = name[ 1 ];
  printf( "%s" , getname );

}

void solution( char firstname[] , char lastname[] ) {

  printf( "Hello %s %s\n", firstname , lastname );
  printf( "%.2s%.2s\n", firstname , lastname );

  //free( firsttwo )

}

int main() {

  char firstname[ 20 ];
  char lastname[ 20 ];

  scanf( "%s\n", firstname );
  scanf( "%s\n", lastname );

  solution( firstname , lastname );

  return 0;
}
