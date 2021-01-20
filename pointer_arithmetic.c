//Pointer is a variable which stores the address of anything.
#include <stdio.h>

int main()
{
	//An array with their initialization list.
	int arr[6] = {10,20,30,40,50,60};
	
	//Pointers pointing to particular elements.
	int *ptr1 = &(arr[1]);
	int *ptr2 = arr + 4;
	
	//Addition of pointer with an integral.
	printf("Value of ptr1 : %p\nValue of ptr1 + 1 : %p\n\n", ptr1, ptr1 + 1);
	/*
		  ptr1 + 1
		= ptr1 + 1 * sizeof(pointer type)
		= ptr1 + 1 * sizeof(int)
		= ptr1 + 1 * 4
		= ptr1 + 4
		= 100 + 4			(say ptr1 points to 100)
		= 100
	*/
	
	//Addition of Pointer with Pointer is not allowed.
	
	//Subtraction of integral constant with pointer.
	printf("Value of ptr2 : %p\nValue of ptr2 - 1 : %p\n\n", ptr2, ptr2 - 1);
	/*
		  ptr2 - 1
		= ptr2 - 1 * sizeof(pointer type)
		= ptr2 - 1 * sizeof(int)
		= ptr2 - 1 * 4
		= ptr2 - 4
		= 120 - 4			(say ptr2 points to 120)
		= 116
	*/
	
	//Subtraction of Pointer with Pointer is not allowed, if two pointers are of different types, otherwise allowed.
	printf("Value of ptr2 : %p\nValue of ptr1: %p\n\nTheir Subtraction is i.e. q - p is %ld\n\n", ptr2, ptr1, ptr2 - ptr1);
	/*
		  ptr2 - ptr1
		= (ptr2 - ptr1) / sizeof(pointer type)
		= (ptr2 - ptr1) / sizeof(int)
		= (ptr2 - ptr1) / 4
		= (116 - 104) / 4
		=  12 / 4			(say ptr2 points to 116 and ptr1 points to 104.)
		= 3
	*/
	
	//Shorthand Operator.
	//Increament Operator.
	printf("Ptr1 before increament : %p\n\n", ptr1);
	ptr1++;
	printf("Ptr1 after increament : %p\n\n", ptr1);
	
	//Decreament Operator.
	printf("Ptr1 before decreament : %p\n\n", ptr1);
	ptr1--;
	printf("Ptr1 after decreament : %p\n\n", ptr1);
	
	//Multiplication of Pointer with Pointer and integral constant is not allowed.
	
	//Division of Pointer with Pointer and integral constant is not allowed.
	return 0;
}
