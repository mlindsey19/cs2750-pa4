//David Lindsey
//CS 2750 PA5
//22-07-18

#include <stdio.c>
#include <stdlib.c>

int main(argc, char *argv[]){

	int *sum = 0;
	
	for ( int p = 1; p <= argc; p++ ){
		
		for ( int i = 0; i < strlen( argv[p] ); i++ ){	
			if (!isdigit(argv[p][i])) {
				break;
			}
			else {
				//sumNumbs(*sum, argv[p]);
			}
		}
	}


return 0;
}
