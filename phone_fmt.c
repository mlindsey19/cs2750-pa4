//David Lindsey
//cs 2750 pa5
//22- 07-2018

#include <stdio.h>
#include <stdlib.h>

char* phone_ftm(char *string){
	
	int digitCount = 0;
	char number[10];
	for (int i = 0; i < 200; i++)
		if (digitCount == 10){
		break;
		}
		else if ( isdigit(string[i]) ){
		number[digitCount] = string[i];
		digitCount++;
		}

	char* finalString;
       finalString = sprintf( "(%c%c%c) %c%c%c-%c%c%c%c", number[0], number[1], number[2], number[3], number[4], number[5], number[6], number[7], number[8], number[9]);

	return *finalString;

}
