//David Lindsey
//cs2750 pa5
//22-07-18

#include <stdio.h>
#include <stdlib.h>
#include "phone_fmt.h"

int main(){
	char nubmer_w_extras[200];
	
	printf("Enter 10 digit Phone number:\n");
	fgets(nubmer_w_extras, 200, stdin);

	printf("input: %s\n", nubmer_w_extras);

	char *number = phone_fmt(nubmer_w_extras);

	printf("Output: %s", number );
	


return 0; 
}
