#include<iostream>

int main(int argc,char **argv)
{
	// Pointers - It is a special kind of variables that store addresses of other variable.
	// 			  Pointer variable and other variable should be of same type.
	// Null Pointer - This pointer doesn't point to any memory location. It represents invalid memory location.
	// Syntax - [ data type ] *[ variable name ] = &[ other variable name ];
	// Syntax for NULL pointer - int * [ variable name ] = nullptr;
	
/*	int a = 10;
	int *ptr = &a; // same as ptr = &a;

	std::cout<<"Value of a: "<<a<<std::endl;
	std::cout<<"Address of a: "<<ptr<<std::endl;
	std::cout<<"Value of *ptr: "<<*ptr<<std::endl; // Dereferencing pointer

	// Initialising NULL pointer
	int *ptr1 = nullptr;


	// Initialising pointer to char
	//
	// Note: You can't modify character pointer because of const keyword
	const char *ptrc = "Hello";
	
	std::cout<<"Address of *ptrc: "<<ptrc<<std::endl;
	std::cout<<"Value of *ptrc: "<<*ptrc<<std::endl; // print only first character
	
	// Pointer to Pointer
	
	int var1 = 10;
	int * var2;
	int ** var3;

	var2 = &var1;
	var3 = &var2;
	
	std::cout<<"Value of var1: "<<var1<<std::endl;
	std::cout<<"Value of *a: "<<*var2<<std::endl;
	std::cout<<"Value of **b: "<<**var3<<std::endl;

	std::cout<<"Address of var1: "<<var2<<std::endl;
	std::cout<<"Address of *a: "<<var3<<std::endl;
	std::cout<<"Address of **b: "<<&var3<<std::endl;
*/	
	// Dynamic Memory Allocation
	
	/*
	 * Stack vs Heap: -
	 * 1. Both memory is finite.
	 * 2. In stack developer isn't full control of memory lifetime. In heap developer is in full control of memory lifetime.
	 * 3. In stack developer control memory by scope mechanism. In heap developer control memory by new and delete operators.
	 *
	 * */

	// Dynamic Heap Memory
/*	int *ptrh = nullptr; // 1st initialising NULL pointer, we also do like this --> int *ptrh = NULL;
	ptrh = new int;		 // 2nd new [ data type ], here OS will allocate heap of memory.
						 // this allocated memory is belongs to ptrh and can't be use for other purpose
	*ptrh = 65984;
	std::cout<<"Value stored in heap memory is "<<*ptrh<<std::endl;

	delete ptrh;		 // this pointer point to a location which is freed, it is also known as dangling pointer.
	ptrh = nullptr; 	 // so we have to reset to NULL pointer
*/	
	/*
	 * Void Pointers(generic pointers): It don't have any specific data types, but they can be type casted to any type.
	 * 		Syntax: void * [ variable name ];
	 *
	 * Wild Pointers: It is not been initialised with something and also cause to crash a program.
	 * 		Syntax: [ data type ] * [ variable name ]
	 *
	 * Constant Pointers: It stores memory address permenantly, but can change values.
	 * 		Syntax: [ data type ] * const [ variable name ];
	 *
	 * Pointer to Constant: It stores values permenantly, but can change memory address.
	 * 		Syntax: const [ data type ] * [ variable name ];
	 * 
	 * */

	/*
	 *
	 * try
	 * {
	 * 		//statement
	 * }catch(std::exception& [ variable name ])
	 * {
	 * 		//statement
	 * }
	 *
	 * */

	/*
	 *
	 * Syntax for disable exception: [ data type ] * [ variable name ] = new(std::nothrow) [ data type ];
	 *
	 * initialise value will be zero.
	 *
	 * */
/*
	try
	{
		int var1;
		int var2 = 0;
		std::cin>>var1;
		int num1 = var1/var2;
	}catch(std::exception& msg)
	{
		std::cout<<msg.what()<<std::endl;
	}
*/
	/*
	 * Dynamic Array: -
	 * -------------
	 *  Array allocated in heap using new operator. We can also use std::nothow for throwing no errors.
	 *
	 *  Syntax: [ data type ] * [ variable name ] = new [ data type ][size];
	 *  
	 *  Syntax for no exceptions: [ data type ] * [ variable name ] = new(std::nothrow) [ data type ][size];
	 *
	 *  Syntax for releasing memory: delete[] [ variable name ];
	 *
	 *  Note: std::size and for-each loop will not work because array is initialised.
	 *
	 * */
/*
	int size = 10;
	int *arr = new(std::nothrow) int[size];

	arr[0] = 11;
	arr[1] = 22;
	arr[2] = 33;
	arr[3] = 44;
	arr[4] = 55;
	arr[5] = 66;
	arr[6] = 77;
	arr[7] = 88;
	arr[8] = 99;
	arr[9] = 100;

	std::cout<<"Dynamic Array: ";
	for(int i = 0; i < 10; i++)
	{
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;

	delete[] arr;
*/

	return 0;
}
