/*
	Do-While Loop = In this loop, the condition is tested at the end of loop body.
	It is exit controlled loop in which condition is checked at the end of loop.
	In do while loop, the loop body will execute at least once irrespective of test condition.
*/

#include <stdio.h>			

int main()					
{
	//Initialization expression
	int i = 0;
	
	do
	{
		 //Loop body 
		printf("While loop count : %d\n", i);
		
		//Increment
		i++;
	}while(i < 5);			//Condition

	return 0;	
}
