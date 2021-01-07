/*
	While Loop = It is used in situations where we do not know the exact number of iterations of loop but destination is known.
	It is entry controlled loop in which condition is checked before the execution of body of the loop.
*/

#include <stdio.h>			

int main()					
{
	// Initialization
	int i = 0;
	
	// Condition
	while(i < 5)
	{
		printf("While loop count : %d\n", i);
		
		//Increment
		i++;
	}

	return 0;	
}
