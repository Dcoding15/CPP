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
		(c) push_back()		-> remove element from ending
		(d) emplace_back()	-> insert element from ending
		(e) pop_back()		-> remove element from ending
		(f) resize()		-> remove all elements after reserving some spcific position of elements
		(g)	swap()			-> swaping of two arrays
		(h)	erase()			-> removing some specific position of elements
		(i) clear()			-> remove all elements
		(j) size()			-> how many elements present
		(k) capacity()		-> how much capacity is present (complier dependent)
		(l) reserve()		-> initially reserve some amount of capacity
		(m) shrink_to_fit()	-> reduce capacity of the container by shrinking to only non-inserted elements
*/

/*

Example of vector: -
----------------------
*/
#include<vector>
int main()
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
	// position is a vector data type
	cout<<"Inserting element at specific positions: -"<<endl;
	vect1.insert(vect1.begin()+2, 100);
	for(auto i = vect1.begin(); i != vect1.end(); i++)
	{
		cout<< *i <<" ";
	}
	cout<<endl;

	return 0;

}

/*

Example of array: -
---------------------

#include<array>

int main()
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

	return 0;
}

*/
