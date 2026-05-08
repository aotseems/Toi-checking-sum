#include <stdio.h>
#include <stdlib.h>

char input1[ 5 ][ 5 ] = {
	{ '-' , '-' , '*' , '-' , '-' },
	{ '-' , '*' , '*' , '*' , '-' },
	{ '*' , '-' , '-' , '-' , '*' },
	{ '-' , '-' , '*' , '-' , '-' },
	{ '-' , '-' , '-' , '-' , '-' },
};

char input2[ 7 ][ 4 ] = {
	{ '-' , '*' , '*' , '*' },
	{ '-' , '-' , '-' , '-' },
	{ '-' , '-' , '-' , '*' },
	{ '*' , '*' , '*' , '-' },
	{ '-' , '*' , '*' , '-' },
	{ '*' , '-' , '-' , '-' },
	{ '-' , '-' , '-' , '*' },
};

void solution( int sizey , int sizex , char grid[ sizey ][ sizex ] ) {

	int ignoregrid[ sizey ][ sizex ];

	for ( int y = 0 ;  y < sizey ; y++ ) {
		for ( int x = 0 ; x < sizex ; x++ ) {
			ignoregrid[ y ][ x ] = 0;
		}
	}

	for ( int y = 0 ;  y < sizey - 1 ; y++ ) {
		for ( int x = 0 ; x < sizex ; x++ ) {

			char choosecharacter = grid[ y ][ x ];

			if ( choosecharacter == '-' || ignoregrid[ y ][ x ] == 1 ) {
				continue;
			}

			char lowercharacter = grid[ y + 1 ][ x ];
			if ( lowercharacter != '*' ) {
				ignoregrid[ y + 1 ][ x ] = 1;// character already changed no need to check for second time
			}

			grid[ y + 1 ][ x ] = '*';

		}
	} // check for flood
	//test stuff
	for ( int y = 0 ;  y < sizey ; y++ ) {
		for ( int x = 0 ; x < sizex ; x++ ) {
			printf( "%c" , grid[ y ][ x ] );
		}
		printf( "\n" );
	}

	return;

}


int main() {

	solution( 5 , 5 , input1 );
	solution( 7 , 4 , input2 );

	return 0;
}
