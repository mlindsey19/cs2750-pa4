//David Lindsey
//cs2750 pa5
//22-07-18

#include <stdio.h>
#include <stdlib.h>
#include "phone_fmt.h"
#include <string.h>

int main(){
	char nubmer_w_extras[200];

	printf("Enter 10 digit Phone number:\n");
	fgets(nubmer_w_extras, 200, stdin);

	printf("input: %s", nubmer_w_extras);

	phone_fmt( nubmer_w_extras );


return 0; 
}
