#include <stdio.h>
#include <math.h>

int main() {


  int totalpeople;
  int totalcustomer;
  int peopleheights[ 100000 ];
  int customers[ 100000 ];

  int issuccess = scanf( "%d\n" , &totalpeople );

  if ( issuccess == 0 ) {
    return 1;
  }

  int issuccess2 = scanf( "%d\n" , &totalcustomer );

  if ( issuccess2 == 0 ) {
    return 1;
  }

  for ( int i = 0 ; i < totalpeople ; i++ ) {

    int height;
    int issuccess3 = scanf( "%d\n" , &height );

    if ( issuccess3 == 0 ) {
      return 1;
    }

    peopleheights[ i ] = height;

  }

  for ( int i = 0 ; i < totalcustomer ; i++ ) {

    int customer;
    int issuccess4 = scanf( "%d\n" , &customer );

    if ( issuccess4 == 0 ) {
      return 1;
    }

    customers[ i ] = customer;

  }

  int maxheight = -1;
  int currentcustomerindex = 0;

  for ( int i = 0 ; i < totalpeople ; i++ ) {

    int currentheight = peopleheights[ i ];

    if ( customers[ currentcustomerindex ] - 1 == i ) {

      int needmoreby = ( maxheight + 1 ) - currentheight;

      if ( needmoreby < 0 ) {
        needmoreby = 0;
      }

      printf( "%d\n" , needmoreby );

      currentcustomerindex = currentcustomerindex + 1;

      if ( currentcustomerindex >= totalcustomer ) {
        break;
      }

    }

    if ( maxheight == -1 ) {
      maxheight = currentheight;
    }

    if ( currentheight > maxheight ) {
      maxheight = currentheight;
    }

  }

}
