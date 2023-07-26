//An Array is a derived data-type, which is a collection of All Homogeneous elements stored in a sequential order.
#include <stdio.h>

int main()
{
	//Declaration of an array.
	int arr[5];
	int *ptr = arr;
	
	//int arr[];					//Not allowed.
	//Base address of an array.
	printf("Base Address of an array : %p\n", arr);
	
	//printf("%p\n", arr++);		//We cannot change the base address of an array.
	
	//We can access the array index-wise and pointer-wise.
	//As we did not initialize the array, the below statement will represent the default value.
	printf("Element with its default value : %d\n", arr[0]);

	//Initialize the array.
	//Without iteration.
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	printf("\nElements without iteration : \n");
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	
	//With iteration.
	for(int i = 0; i < 5; i++)
	{
		arr[i] = i + 20;
	}
	
	printf("\nElements with iteration : \n");
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	printf("\nTaking value from user : \n");
	scanf("%d", &arr[0]);
	printf("\nUpdated value of arr[0]: \n");
	printf("%d", arr[0]);
	printf("\nSize of whole array in bytes : %ld\n", sizeof(arr));
	printf("\nSize of First element in array in bytes : %ld\n", sizeof(arr[0]));
	printf("\nSize of pointer to an array : %ld\n", sizeof(ptr));
	printf("\nSize of *ptr : %ld\n", sizeof(*ptr));
	printf("\nBase Address of Array : %p\n", arr);
	printf("\nAddress of Whole Array : %p\n", &arr);
	printf("\nAddress of First Array : %p\n", &arr[0]);
	printf("\nAddress of Second Element : %p\n", arr + 1);		//base address of an array + (size of an element) * constant :: 100 + 4 * 1, 																where 100 is base address, 4 is size of an element and 1 is that constant number.
						
	//printf("\nAddress of Second Element : %p\n", &(arr + 1));
	printf("\nAddress at which this whole array ends: %p\n", &arr + 1);				//100 + 1 * sizeof(whole array)
	

	//array initialization with member initialization list.
	//In the case of the member initialization list, the size of an array is optional.
	int brr[8] = {11,12,13,14};
	printf("\nFirst element : %d\n", brr[0]);
	printf("\nFifth element : %d\n", brr[4]);
	for(int i = 0; i < 8; i++)
	{
		printf("%d\n", brr[i]);
	}
	
	printf("\nSize of whole array in bytes : %ld\n", sizeof(brr));
	printf("\nSize of First element in array in bytes: %ld\n", sizeof(brr[0]));
	printf("\nSize of whole array in bytes : %ld\n", sizeof(&brr));
	//We can access an index which is out of the array also execute that index, but it will print some garbage value that is not in their memory space.
	printf("\nOut of Bound index : %d\n", brr[11]);
	return 0;
}
