/*
	Statement is an expression which terminates with semicolon.
	1)Declaration statement = The role of declaration statement is to introduce the name of an identifier along with its data type to 					  compiler before its use.
	2)Definition statement = The memory space for an identifier can be reserved by using definition statement.
	3)Null statement = It is just a semicolon. It performs no operation.
	4)Expression statement = An expression such as assignments or function call or printf statements terminated with semicolon forms an 					expression statement. 
*/

#include <stdio.h>			

int main()					
{
	//Declaration statement
	extern int m;
	
	//When memory is allocated for an identifier, you can access the address of that variable.
	//In our case, memory for variable m is not allocated, so if we try to access to the address of variable m, we will get an error and 		program will terminate.
	
	//printf("%p\n", &m);
	
	//Definition statement	
	int i;						//Memory is 4 bytes.
	//Here, memory is allocated, so that we can access the address.				
	printf("%p\n", &i);		
	
	//Null statement
	;
	
	//Expression statement - Most expression statements are assignments or function calls. All side effects from the expression are completed 		before the next statement is executed.
	
	i = 4 + 5;					//Expression statements
	printf("%d\n", i);			//Expression statements
	
	return 0;				
}

