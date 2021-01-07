/*
	Switch-Statement is a multi-way decision that tests whether an expression matches one of a number of constant integer values, and branches 
	accordingly.
	It consists of case-labeled statement and default-labeled statemnt.
	Label = Label can be any plain text except C keyword.
	Labeled statement = Statements may carry label prefixes.
	
	Case-Labeled statement = Statement consists of the keyword 'case' followed by one or more integer-valued constant or constant expressions.
							 Case-label should be compile time constant expression of integral type.
							 If a case matches the expression value, execution starts at that case.
	
	Default-Labeled statement = Statement consists of the keyword 'default' followed by colon and statement. It is executed if none of the 									other cases are satisfied.
	Syntax :
			switch(expression)
			{
				case const-expr : statements
				case const-expr : statements
				
				deafult : statements
			}

*/

#include <stdio.h>			

int main()					
{
	int m = 11;
	
	//The switch selection expression must be of integral type i.e. integer or character.
	switch(m)
	{
		//ALLOWED. 'a' is a charater constant.
		case 'a' :
					printf("It is a.\n");
					break;
		//ALLOWED. 1 is a integer constant.
		case 1 :
					printf("It is 1.\n");
					break;
			
		//ALLOWED. Nested case-labeled statement.
		case 9 :
					case 10 :
								case 11 :
											printf("It's our Match.\n");
											break;
		//ALLOWED. It is compile time constant expression of integral value.
		case 3+5 :
					printf("It is 9.\n");
					break;
		
		//NOT ALLOWED. It is variable and not a constant.
		/*case a:
					printf("It is a.");
					break;
		*/
				
		//NOT ALLOWED. 8.4 is a floating point constant.
		/*case 8.4 :
					printf("It is 1.\n");
					break;
		*/
		
		//Multiple default statements and nested default statements are not allowed.
		//ALLOWED.
		default :
					printf("No Match Found.\n");				
					break;	
		
	}
	
	return 0;	
}


