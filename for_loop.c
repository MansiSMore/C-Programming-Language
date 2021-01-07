/*
	For Loop = It is used in situations where number of iterations of loop is known already.
	It is entry controlled loop in which condition is checked before the execution of body of the loop.
*/

#include <stdio.h>			

int main()					
{
	int i = 0;
	
	//Initialization, Condition, Increment
	for(i = 0; i < 5 ; i++)
	{
		printf("For loop count : %d\n", i);
	}

	return 0;	
}
