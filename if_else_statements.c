/*
	Statement is an expression which terminates with semicolon.
	Selection statement = Selection statement select a statement to be executed among a set of various statements. Transfer the control 					from one point to another point. 
	1)If-else = It is used to express decision.
	2)Nested if-else = if statement or else statement contains another if-statement or if-else statement.
	3)Else-if = It is a chain-like structure in which if any expression is true, the statement associated with it is executed and terminates 					the whole chain.
*/

#include <stdio.h>			

int main()					
{
	int m = 11, n = 21;
	
	//if-else statement
	if(m == n)
		printf("m and n are equal.\n");
	else
		printf("m and n are not equal.\n");
		
	/*If if statement is terminated with semicolon, then it is interpreted as if statement followed by null statement and logical error due to 		semicolon placed at the end.
	*/
	
	if(m != n);
		printf("m and n are equal.\n");
	
	/*Nested if-else statement*/
	if(m > 1)
	{
		if(m > 5)
		{
			if(m > 10)
			{
				printf("m is greater than 10.\n");
			}
			else
			{
				printf("m is less than 10.\n");
			}
		}
		else
		{
			printf("m is less than 5.\n");
		}
	}
	else
	{
		printf("m is less than 1.\n");
	}
	
	/*The else part of an if-else is optional, there is an ambiguity when an else is omitted from a nested if sequence. This ambiguity is 		known as DANGLING ELSE AMBIGUITY. */
	//Here, the output is nothing.
	if(m < 1)
	if(m > 5)
	printf("m is greater than 5.\n");
	else
	printf("m is less than 5.\n");
	//If we enble this else, code will work properly.
	/*else
	{
		printf("m is greater than 1.\n");
	}*/
	
	/* else-if statement */
	if(m > 12)
		printf("m is greater than 2.\n");
	else if(m < -1)
		printf("m is less than -1.\n");
	else if(m < 0)
		printf("m is less than 0.\n");
	else if(m < 8)
		printf("m is less than 8.\n");
	else 
		printf("m is greater.\n");

	return 0;				
}


