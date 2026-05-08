#include <stdio.h>
#include <math.h>

int main() {

  int idkwhyineedthis;
  int totalneededdna;
  int allneededdna[ 100000 ][ 2 ];

  int issuccess = scanf( "%d\n" , &idkwhyineedthis );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess1 = scanf( "%d\n" , &totalneededdna );

  if ( issuccess1 == 0 ) {
    return 1;
  }

  for ( int i = 0 ; i < totalneededdna ; i++ ) {
    for ( int l = 0 ; l < 2 ; l++ ) {

      int issuccess2 = scanf( "%d\n" , &allneededdna[ i ][ l ] );

      if ( issuccess2 == 0 ) {
        return 1;
      }

    }

  }

  int includednamaxsize = 0;

  for ( int firstdnaindex = 0 ; firstdnaindex < totalneededdna ; firstdnaindex++ ) {

    int includeddna = 1;
    int min = allneededdna[ firstdnaindex ][ 0 ];
    int max = allneededdna[ firstdnaindex ][ 1 ];

    for ( int checkdnaindex = 0 ; checkdnaindex < totalneededdna ; checkdnaindex++ ) {

      if ( checkdnaindex == firstdnaindex ) {
        continue;
      }

      int checkmin = allneededdna[ checkdnaindex ][ 0 ];
      int checkmax = allneededdna[ checkdnaindex ][ 1 ];
      int isincluded = checkmin < max && checkmax > min;

      if ( isincluded == 1 ) {

        includeddna++;

        if ( checkmin > min ) {
          min = checkmin;
        }

        if ( checkmax < max ) {
          max = checkmax;
        }

        if ( max <= min ) {
          break;
        }

      }

    }

    if ( includeddna > includednamaxsize ) {
      includednamaxsize = includeddna;
    }

  }

  printf( "%d\n" , includednamaxsize );

  return 0;

}
