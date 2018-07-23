//David Lindsey
//
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
	char *string_list[200];
	int new_arr_counter = 0;

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
		else {
			string_list[new_arr_counter] = argv[p];
			new_arr_counter++;
		}
	}
	printf ( "%i\n", sum);

	for ( int i = 0; i < new_arr_counter; i++) {
		for ( int k = (i + 1); k < new_arr_counter; k++ ){
			if ( strstr( string_list[k], string_list[i] ) ){
				printf("%s is a substring of %s\n", string_list[i], string_list[k]);
					}
		}
	
	}

return 0;
}
