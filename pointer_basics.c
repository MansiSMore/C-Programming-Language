//Pointer is a variable which stores the address of anything.
#include <stdio.h>

int main()
{
	//Variables
	int no = 11;
	char ch = 'M';
	float f = 50.76f;
	double d = 23.30067f;
	
	//Pointer Initialization
	printf("**** Integer Pointer ****\n\n");
	int *ptr1 = NULL;							//Integer pointer initializing to NULL.
	ptr1 = &no;									//Storing address of no variable into ptr1.
	printf("Value of that address which is stored in ptr1 : %d\n\n",(*ptr1));
	printf("Address of no variable is %p and value stored in ptr1 %p. Both are same.\n\n", &no, ptr1);
	printf("Size of pointer %lu and Size of pointed type is %lu.\n\n", sizeof(ptr1), sizeof(no));
	printf("We can access and modify the variable using pointer - %d.\n\n", ++(*ptr1));
	
	printf("\n\n------------------------------------------------------------------------------------------------------\n\n");
	printf("**** Character Pointer ****\n\n");
	char *ptr2 = NULL;							//Character pointer initializing to NULL.
	ptr2 = &ch;									//Storing address of ch variable into ptr2.
	printf("Value of that address which is stored in ptr2 : %c\n\n",(*ptr2));
	printf("Address of ch variable is %p and value stored in ptr2 is %p. Both are same.\n\n", &ch, ptr2);
	printf("Size of pointer %lu and Size of pointed type is %lu.\n\n", sizeof(ptr2), sizeof(ch));
	printf("We can access and modify the variable using pointer - %c.\n\n", ++(*ptr2));
	
	printf("\n\n------------------------------------------------------------------------------------------------------\n\n");
	printf("**** Float Pointer ****\n\n");
	float *ptr3 = NULL;							//Float pointer initializing to NULL.
	ptr3 = &f;									//Storing address of f variable into ptr3.
	printf("Value of that address which is stored in ptr3 : %f\n\n",(*ptr3));
	printf("Address of f variable is %p and value stored in ptr3 is %p. Both are same.\n\n", &f, ptr3);
	printf("Size of pointer %lu and Size of pointed type is %lu.\n\n", sizeof(ptr3), sizeof(f));
	printf("We can access and modify the variable using pointer - %f.\n\n", ++(*ptr3));
	
	printf("\n\n------------------------------------------------------------------------------------------------------\n\n");
	printf("**** Double Pointer ****\n\n");
	double *ptr4 = NULL;						//Double pointer initializing to NULL.
	ptr4 = &d;									//Storing address of d variable into ptr4.
	printf("Value of that address which is stored in ptr4 : %f\n\n",(*ptr4));
	printf("Address of d variable is %p and value stored in ptr4 is %p. Both are same.\n\n", &d, ptr4);
	printf("Size of pointer %lu and Size of pointed type is %lu.\n\n", sizeof(ptr4), sizeof(d));
	printf("We can access and modify the variable using pointer - %lf.\n\n", ++(*ptr4));

	return 0;
}
