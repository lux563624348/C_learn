//######################################################################
//#### MAIN  
//###### Xiang Li Mar.8.2017
//######################################################################
//######################################################################

// gcc -Wall -O -g rela_main.c

#include <stdio.h>
#include "initialization.h"
//#include <string.h>



int main()
{	
	int n_row , n_line;
	printf("Define the number of row in your grid size:");
	if (!scanf("%d", &n_row)) {
		;
	}
	printf("Define the number of line in your grid size:");
	if (!scanf("%d", &n_line)) {
		;
	}
	printf("\n Your grid size is: %d * %d \n", n_row, n_line);
	
	initial_array(n_row, n_line);
	// End of Initiallization of grid space.
	// while (a<=b){
	//	a=b;
	//	}
		
	return 0;	
	}
