/*
	Statement is an expression which termintaes with semicolon.
	1)Simple statement = Consists of Single statement.(Both executable and non-executable.)
	2)Compound statement OR Block = Consists of sequence of simple statements enclosed within a pair of braces.(Both executable and 
	non-executable statements but sequence is important.)
*/

#include <stdio.h>					//Simple statement

const int j = 20;					//Simple statement

int main()							//Compound statement
{
	{								//Compound statement
		int i = 10, j = 20;
		printf("%d %d\n", i, j);
	}							
	
	{}								//An Empty Compound statement
	
	int i = 10;						//Simple statement
	printf("%d\n", i);				//Simple statement
	
	{								//Compound statement followed by Null statement.
		int i = 50;
		printf("%d\n", i);
	}
	;								//Null statement
	return 0;						//Simple statement
}
