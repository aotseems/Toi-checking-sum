#include <stdio.h>
#include <math.h>

void getmc( int pos1[] , int pos2[] , int mc[] ) {

  int slope = pos2[ 0 ] - pos1[ 0 ] / pos2[ 1 ] - pos1[ 1 ];
  int offset = pos2[ 1 ] - slope * pos2[ 0 ];

  mc[ 0 ] = slope;
  mc[ 1 ] = offset;

  return;

}

int main() {

  int totaplaces = 6;
  int bus1targets[ 2 ] = { 3 , 6 };
  int bus2targets[ 2 ] = { 2 , 4 };

  float xpos[ totaplaces ];

  for ( int i = 0 ; i < totaplaces ; i++ ) {

    float angle = i * M_PI * 2 / totaplaces;
    float x = sin( angle );
    printf("%f %f\n" , x , angle );
    xpos[ i ] = x;

  }

  // for ( int hour = 1 ; hour <= totalcircleedges ; hour++ ) {
  //
  //   float* lastposbus1 = pos[ bus1targets[ hour - 1 ] - 1 ];
  //   float* posbus1 = pos[ bus1targets[ hour ] - 1 ];
  //
  //   float* lastposbus2 = pos[ bus2targets[ hour - 1 ] - 1 ];
  //   float* posbus2 = pos[ bus2targets[ hour ] - 1 ];
  //
  //   float intersecrangex = fmin( lastposbus1[ 1 ] , );
  //   float intersecrangey;
  //   int iscanbeintersect = ;
  //
  //   int mcbus1[ 2 ];
  //   getmc( posbus1 , lastposbus1 , mcbus1 );
  //
  //   int mcbus2[ 2 ];
  //   getmc( posbus2 , lastposbus2 , mcbus2 );
  //
  //   if ( mcbus1[ 0 ] - mcbus1[ 0 ] == 0 ) {
  //     continue;
  //   }
  //
  //
  //
  // }

  for ( int hour = 1 ; hour <= 1 ; hour++ ) {

    float pivot1x = xpos[ bus1targets[ hour ] ];
    float pivot2x = xpos[ bus1targets[ hour ] ];
    float left = xpos[ bus2targets[ hour - 1 ] ];
    float right = xpos[ bus2targets[ hour ] ];

    int is1 = left - pivot1x < 0.00 && right - pivot1x > 0.00;
    int is2 = left - pivot2x < 0.00 && right - pivot2x > 0.00;
    printf( "%f %f %d" , right , left , hour   );
    if ( is1 || is2 ) {
      printf( "ok" );
    }

  }

  return 0;
}
