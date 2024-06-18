/*
STL (standard template libraries): -
---------------------------------
There are 4 types: -
	1. Container	-> It is used to contain elements such as integer, decimal, chracter, etc.
	2. Iterator		-> It is used to point addresses of each elements.
	3. Algorithm	-> Predefined algorithm functions.
	4. Funtors		-> Classes which can act as functions. It is also known as function objects.

std::array: -
----------
	
	Syntax for declaration: -
	----------------------
		std::array<T, N> variable_name;
			where,
					T -> data type
					N -> size of array

	1. It is a fixed size container.
	2. Size of array is needed at compile-time.
	3. We have to use <array> header file.
	4. Iterators: -
		(a) begin()		-> return iterator pointing to first element
		(b) end()		-> return iterator pointing to last element
		(c) rbegin()	-> return reverse iterator pointing to last element
		(d) rend()		-> return reverse iterator pointing to first element
		(e) cbegin()	-> return constant iterator pointing to first element
		(f) cend()		-> return constant iterator pointing to last element
		(g) crbegin() 	-> return constant reverse iterator pointing to last element
		(h) crend()		-> return constant reverse iterator pointing to first element
	4. Access elemets: -
		(a) at()		-> return element of array using index
		(b) []			-> return element of array using index
		(c) front()		-> return first element of array
		(d) back()		-> return last element of array
		(e) data()		-> return address of array first element
		(f) size()		-> return maximum number of elements present
			max_size()	-> return maximum number of elements present
		(g) sizeof()	-> return total size of array in bytes
	5. Modifiers: -
		(a) swap()		-> swaping of two arrays
		(b) empty()		-> check whether array is empty or not, if empty then return true or 1 otherwise false or 0
		(c) fill()		-> assign all indices with same values
		

std::vector: -
-----------

	Syntax for declaration: -
	----------------------
		std::vector<T> variable_name;
		std::vector<T> variable_name(N, V);
		std::vector<T> variable_name(another_vector);
			where,
					T -> data type
					N -> size of vector
					V -> values
	1. It is a dynamic size container and also known as dynamic array or array list.
	2. Size of array is not needed at compile-time.
	3. We have to use <vector> header file.
	4. Iterators: -
		(a) begin()		-> return iterator pointing to first element
		(b) end()		-> return iterator pointing to last element
		(c) rbegin()	-> return reverse iterator pointing to last element
		(d) rend()		-> return reverse iterator pointing to first element
		(e) cbegin()	-> return constant iterator pointing to first element
		(f) cend()		-> return constant iterator pointing to last element
		(g) crbegin() 	-> return constant reverse iterator pointing to last element
		(h) crend()		-> return constant reverse iterator pointing to first element
	5. Access elemets: -
		(a) at()		-> return element using index
		(b) []			-> return element using index
		(c) front()		-> return first element
		(d) back()		-> return last element
		(e) data()		-> return address
		(f) size()		-> return maximum number of elements present
			max_size()	-> return maximum number of elements present
		(g) sizeof()	-> return total size in bytes
	6. Modifiers: -
		(a) insert()		-> insert element at specific position
		(b) emplace()		-> insert element to that extended position
		(c) push_back()		-> insert element from ending
		(d) emplace_back()	-> 
		(e) pop_back()		-> remove element from ending
		(f) resize()		-> remove all elements after reserving some spcific position of elemets
		(g)	swap()			-> swaping of two arrays
		(h)	erase()			-> removing some specific position of elements
		(i) clear()			-> remove all elements
		(j) size()			-> how many elements present
		(k) capacity()		-> how much capacity is present (complier dependent)
		(l) reserve(A)		-> initially reserve some amount of capacity
		(m) shrink_to_fit()	-> 

*/

/*

Example of std::vector: -
----------------------
*/
#include<iostream>
#include<vector>
int main()
{
	std::vector<int> vect1 = {1,2,3,4,5,6,7,8,9,0};

	std::cout<<"Iterate from begin() to end(): -"<<std::endl;
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Iterate from rbegin() to rend(): -"<<std::endl;
	for(auto i = vect1.rbegin(); i != vect1.rend(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Iterate from cbegin() to cend(): -"<<std::endl;
	for(auto i = vect1.cbegin(); i != vect1.cend(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Iterate from crbegin() to crend(): -"<<std::endl;
	for(auto i = vect1.crbegin(); i != vect1.crend(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	return 0;

}

/*

Example of std::array: -
---------------------

#include<iostream>
#include<array>

int main()
{
	std::array<int, 5> arr1;
	arr1 = {1,2,3,4,5};

	std::cout<<"Iterate from begin() to end(): -"<<std::endl;
	for(auto i = arr1.begin(); i != arr1.end(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Iterate from rbegin() to rend(): -"<<std::endl;
	for(auto i = arr1.rbegin(); i != arr1.rend(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Iterate from cbegin() to cend(): -"<<std::endl;
	for(auto i = arr1.cbegin(); i != arr1.cend(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Iterate from crbegin() to crend(): -"<<std::endl;
	for(auto i = arr1.crbegin(); i != arr1.crend(); i++)
	{
		std::cout<< *i <<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Access array elements using at(): -"<<std::endl;
	for(int i=0; i<5; i++)
	{
		std::cout<<arr1.at(i)<<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Access array elements using []: -"<<std::endl;
	for(int i=0; i<5; i++)
	{
		std::cout<<arr1[i]<<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Access first array element using front(): -"<<std::endl;
	std::cout<<arr1.front()<<std::endl;
	
	std::cout<<"Access last array element using back(): -"<<std::endl;
	std::cout<<arr1.back()<<std::endl;

	std::cout<<"Access address of array using data(): -"<<std::endl;
	std::cout<<arr1.data()<<std::endl;
	
	std::cout<<"Access no. of elements present in array: -"<<std::endl;
	std::cout<<arr1.size()<<std::endl;

	std::cout<<"Access no. of elements present in array: -"<<std::endl;
	std::cout<<arr1.max_size()<<std::endl;

	std::array<int, 5> arr2 = {6,7,8,9,10};
	arr1.swap(arr2);

	std::cout<<"Swapping two arrays: -"<<std::endl;
	for (auto i: arr1)
	{
		std::cout<<i<<" ";
	}
	std::cout<<std::endl;

	std::array<int, 4> arr3;
	std::cout<<"Check whether array is empty or not: -"<<std::endl;
	std::cout<<arr3.empty()<<std::endl;

	std::cout<<"Fill all places with same value"<<std::endl;
	arr3.fill(123);
	for(auto i : arr3)
	{
		std::cout<<i<<" ";
	}
	std::cout<<std::endl;

	return 0;
}

*/
