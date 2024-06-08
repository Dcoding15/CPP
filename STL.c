/*
STL (standard template libraries): -
---------------------------------
There are 4 types: -
	1. Container	-> It is used to contain elements such as integer, decimal, chracter, etc.
	2. Iterator		-> It is used to point addresses of each elements.
	3. Algorithm	-> Predefined algorithm functions.
	4. Funtors		-> Classes which can act as functions. It is also known as function objects.

std::array : -
----------
	
	Syntax for declaration: -
	----------------------
		std::array<T, N> variable_name;
			where,
					T -> data type
					N -> size of array

	1. It is a fixed size container.
	2. Size of array is needed at compile-time
	3. Access elemets: -
		(a) at(I)	-> return element of array using index
		(b) [I]		-> return element of array using index
		(c) front()	-> return first element of arrau
		(d) back()	-> return last element of array
		(e) data()	-> return address of array
	   Where, I -> array of index
	4. We have to use <array> header file.	
*/

#include<iostream>
#include<array>

int main()
{
	std::array<int, 5> arr1;
	arr1 = {1,2,3,4,5};

	std::cout<<"Access array elements using at(): -"<<std::endl;
	for(int i=0; i<5; i++)
	{
		std::cout<<arr1.at(i)<<std::endl;
	}

	std::cout<<"Access array elements using []: -"<<std::endl;
	for(int i=0; i<5; i++)
	{
		std::cout<<arr1[i]<<std::endl;
	}

	std::cout<<"Access first array element using front(): -"<<std::endl;
	std::cout<<arr1.front()<<std::endl;
	
	std::cout<<"Access last array element using back(): -"<<std::endl;
	std::cout<<arr1.back()<<std::endl;

	std::cout<<"Access address of array using data(): -"<<std::endl;
	std::cout<<arr1.data()<<std::endl;
	return 0;
}
