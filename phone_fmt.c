//David Lindsey	
//cs 2750 pa5
//22- 07-2018

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void phone_fmt(char const *string ){
	
	int digitCount = 0;
	char number[10] = "0000000000";
	char numberf[14];
	for (int i = 0; i < 200; i++){
		if (digitCount == 10){
		break;
		}
		else if ( isdigit(string[i]) ){
		number[digitCount] = string[i];
		digitCount++;
		}
	}


	numberf[0] = '(';
	numberf[1] = number[0];
	numberf[2] = number[1];
	numberf[3] = number[2];
	numberf[4] = ')';
	numberf[5] = number[3];
	numberf[6] = number[4];
	numberf[7] = number[5];
	numberf[8] = '-';
	numberf[9] = number[6];
	numberf[10] = number[7];
	numberf[11] = number[8];
	numberf[12] = number[9];
	numberf[13] = '\0';
	if (digitCount < 10 )	
		printf("output: ERROR: not enough digits on input\n");
	else
	printf( "output: %s\n", numberf);
}
