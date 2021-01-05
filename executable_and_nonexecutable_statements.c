/*
	Statement is an expression which termintaes with semicolon.
	1)Non-executable statement = Tells the compiler how to build a program.(Machine code is not generated.)
	2)Executable statement = Represent the instructions that are to be performed when the program is executed.(Machine code is generated.)
*/
#include <stdio.h>			//Non-executable statement

const int j = 20;			//Non-executable statement

int main()					//Non-executable statement
{
	/*
		This code snippet will generate error, because sequence of executable and non-executable is interchanged.
		Non-executable statement should appear before executable statement within a block.
		
		{
			printf("%d\n",i);		//Executable statement	
			int i = 10;				//Non-executable statement
		}
	*/
	int i = 10;				//Non-executable statement
	
	printf("%d\n", i);		//Executable statement
	return 0;				//Executable statement
}
