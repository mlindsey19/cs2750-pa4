//David Lindsey
//CS 2750 PA5
//22-07-18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

int main(int argc, char *argv[]){

	int *sum_ptr;
	int sum = 0;
	sum_ptr = &sum;
	int isInt = 0;

	for ( int p = 1; p < argc; p++ ){
		
		for ( int i = 0; i < strlen( argv[p] ); i++ ){	
			if (isdigit(argv[p][i])) {
				isInt = 1;
			}

			else {
				isInt = 0;
				break;
			}
		}
		if ( isInt == 1 ) {
				sumNumbers(sum_ptr, argv[p]);
		}
	}
	printf ( "%i\n", sum);

return 0;
}
