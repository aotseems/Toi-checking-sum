#include <stdio.h>
#include <math.h>

int swap( int* a , int* b ) {

  *b = *b ^ *a;
  *a = *b ^ *a;
  *b = *b ^ *a;

}

void sort( int array[] , int length ) {

  for ( int x = 0 ; x < length ; x++ ) {
    for ( int y = 0 ; y < length ; y++ ) {
      if ( array[ x ] < array[ y ] ) {
        swap( &array[ y ] , &array[ x ] );
      }
    }
  }
}

int main() {

  int sizex;
  int sizey;
  int xtotal;
  int ytotal;

  int issuccess = scanf( "%d\n" , &sizex );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess1 = scanf( "%d\n" , &sizey );

  if ( issuccess1 == 0 ) {
    return 1;
  }

  int issuccess2 = scanf( "%d\n" , &xtotal );

  if ( issuccess2 == 0 ) {
    return 1;
  }

  int issuccess3 = scanf( "%d\n" , &ytotal );

  if ( issuccess3 == 0 ) {
    return 1;
  }

  int cutsx[ xtotal + 2 ];
  int cutsy[ ytotal + 2 ];

  for ( int i = 0 ; i < xtotal ; i++ ) {

    int issuccess4 = scanf( "%d\n" , &cutsx[ i + 1 ] );

    if ( issuccess4 == 0 ) {
      return 1;
    }

  }

  for ( int i = 0 ; i < ytotal ; i++ ) {

    int issuccess5 = scanf( "%d\n" , &cutsy[ i + 1 ] );

    if ( issuccess5 == 0 ) {
      return 1;
    }

  }

  cutsx[ 0 ] = 0;
  cutsx[ xtotal + 1 ] = sizex;

  cutsy[ 0 ] = 0;
  cutsy[ ytotal + 1 ] = sizey;

  int sizes[ 2 ] = { 0 , 0 };
  int curretsizeindex = 0;

  for ( int xindex = 1 ; xindex < xtotal + 2 ; xindex++ ) {

    int lastx = cutsx[ xindex - 1 ];
    int currentx = cutsx[ xindex ];

    for ( int yindex = 1 ; yindex < ytotal + 2 ; yindex++ ) {

      int lasty = cutsy[ yindex - 1 ];
      int currenty = cutsy[ yindex ];

      int xsize = currentx - lastx;
      int ysize = currenty - lasty;

      int size = xsize * ysize;

      for ( int setindex = 0 ; setindex < 2 ; setindex++ ) {

        int checksize = sizes[ setindex ];

        if ( size > checksize ) {

          if ( setindex == 0 ) {

            int oldsize = sizes[ setindex ];
            sizes[ setindex + 1 ] = oldsize;

          }

          sizes[ setindex ] = size;
          break;
          
        }

      }

    }

  }

  sort( sizes , curretsizeindex );

  printf( "%d %d\n" , sizes[ 0 ] , sizes[ 1 ] );


}
