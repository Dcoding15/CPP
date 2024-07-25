#include<iostream>
using namespace std;

/*
STL (standard template libraries): -
---------------------------------
There are 4 types: -
	1. Container	-> It is used to contain elements such as integer, decimal, chracter, etc.
	2. Iterator		-> It is used to point addresses of each elements.
	3. Algorithm	-> Predefined algorithm functions.
	4. Funtors		-> Classes which can act as functions. It is also known as function objects.

Iterator: -
--------
	begin()		-> return iterator pointing to first element
	end()		-> return iterator pointing to last element
	rbegin()	-> return reverse iterator pointing to last element
	rend()		-> return reverse iterator pointing to first element
	cbegin()	-> return constant iterator pointing to first element
	cend()		-> return constant iterator pointing to last element
	crbegin() 	-> return constant reverse iterator pointing to last element
	crend()		-> return constant reverse iterator pointing to first element

Size and Capacity: -
-----------------
	size()				-> return maximum number of elements present
	sizeof()			-> return total size of container in bytes
	empty()				-> return true (if empty) or false (if not empty)
	max_size()			-> return maximum number of elements present
	capacity()			-> return number of blocks of space are present (compiler dependent) (only vector and string)
	reserve()			-> reserve space for specific elements in container (only vector and string)
	resize()			-> remove all elements after reserving spcified amount of elements
	shrink_to_fit()		-> make capacity() to size()(only vector, string, deque)
	clear()				-> erase all elements from container

Access Elements: -
---------------
	at()				-> return element of container using index or key
	[]					-> return element of container using index or key
	front()				-> return first element of container
	back()				-> return last element of container
	data()				-> return address of container first element

array: -
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
	4. Modifiers: -
		(a) swap()		-> swaping of two arrays
		(b) fill()		-> assign all indices with same values

vector: -
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
	4. Modifiers: -
		(a) insert()		-> insert element at specific position (coping of objects takes place)
		(b) emplace()		-> insert element at specific position (making of new objects takes place)
		(c) push_back()		-> remove element from ending
		(d) emplace_back()	-> insert element from ending
		(e) pop_back()		-> remove element from ending
		(g)	swap()			-> swaping of two vectors
		(h)	erase()			-> removing some specific position of elements
*/

/*

Example of vector: -
----------------------
*/

void array_example()
{
	array<int, 5> arr1;
	arr1 = {1,2,3,4,5};

	cout<<"Iterate from begin() to end(): -"<<endl;
	for(auto i = arr1.begin(); i != arr1.end(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Iterate from rbegin() to rend(): -"<<endl;
	for(auto i = arr1.rbegin(); i != arr1.rend(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Iterate from cbegin() to cend(): -"<<endl;
	for(auto i = arr1.cbegin(); i != arr1.cend(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Iterate from crbegin() to crend(): -"<<endl;
	for(auto i = arr1.crbegin(); i != arr1.crend(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Access array elements using at(): -"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr1.at(i)<<" ";
	}
	cout<<endl;

	cout<<"Access array elements using []: -"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl;

	cout<<"Access first array element using front(): -"<<endl;
	cout<<arr1.front()<<endl;
	
	cout<<"Access last array element using back(): -"<<endl;
	cout<<arr1.back()<<endl;

	cout<<"Access address of array using data(): -"<<endl;
	cout<<arr1.data()<<endl;
	
	cout<<"Access no. of elements present in array: -"<<endl;
	cout<<arr1.size()<<endl;

	cout<<"Access no. of elements present in array: -"<<endl;
	cout<<arr1.max_size()<<endl;

	array<int, 5> arr2 = {6,7,8,9,10};
	arr1.swap(arr2);

	cout<<"Swapping two arrays: -"<<endl;
	for (auto i: arr1)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	array<int, 4> arr3;
	cout<<"Check whether array is empty or not: -"<<endl;
	cout<<arr3.empty()<<endl;

	cout<<"Fill all places with same value"<<endl;
	arr3.fill(123);
	for(auto i : arr3)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

void vector_example()
{
	vector<int> vect1 = {1,2,3,4,5,6,7,8,9,0};

	cout<<"Iterate from begin() to end(): -"<<endl;
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Iterate from rbegin() to rend(): -"<<endl;
	for(auto i = vect1.rbegin(); i != vect1.rend(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Iterate from cbegin() to cend(): -"<<endl;
	for(auto i = vect1.cbegin(); i != vect1.cend(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Iterate from crbegin() to crend(): -"<<endl;
	for(auto i = vect1.crbegin(); i != vect1.crend(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	// insert(position, value)
	// emplace(position, value)
	// position is a vector data type
	// use emplace for effiency
	cout<<"Inserting element at specific positions: -"<<endl;
	vect1.insert(vect1.begin()+2, 100);
	vect1.emplace(vect1.begin()+3, 300);
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	cout<<"Inserting element from ending: -"<<endl;
	vect1.emplace_back(555);
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;

	cout<<"Removing element from ending: -"<<endl;
	vect1.pop_back();
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;

	cout<<"Resizing container to some specific elements: -"<<endl;
	vect1.resize(4);
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	vector<int> vect2 = {11,22,33,44,55,66};
	vect1.swap(vect2);
	cout<<"Swapping two vectors: -"<<endl;
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;
}
#include<vector>
int main()
{
	array_example();
	vector_example();
	return 0;
}
