#include<iostream>
#include<type_traits> // trace type of built-in or custome concepts
#include<concepts> // C++20 (use g++ -std=c++20 filename.cpp)

// Example of syntax 1
template <typename T>
requires std::integral<T>
T add(T a, T b)
{
	return a+b;
}

// Example of syntax 2
template <std::integral T>
T mul(T a, T b)
{
	return a*b;
}

// Example of syntax 3
auto sub(std::integral auto a, std::integral auto b)
{
	return (a > b) ? a-b : b-a;
}

// Example of syntax 4
template <typename T>
T pow(T base, T expo) requires std::integral <T>
{
	if(expo > 0)
	{
		int n = base;
		for(int i = 0; i < expo-1; i++)
		{
			base *= n;
		}
		return base;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char ** argv)
{
	/*
	 * Concepts: -
	 * 1. A mechnanism to place constraints on your template type parameters.
	 * 2. There are 2 types of concepts: -
	 * 		(a) Standard built-in concepts
	 * 		(b) Custom concepts
	 *	
	 *	Standard built-in concepts: -
	 *	--------------------------
	 *
	 * 	Syntax 1: -
	 * 	template <typename T>
	 * 	requires std::[ built-in concepts ]<T>
	 * 	T [ function name ] ( [ parameter defined with ' T ' ] )
	 * 	{
	 * 		// body of function
	 * 	}
	 *
	 * 	Syntax 2: -
	 * 	template <std::[ concepts ] T>
	 * 	T [ function name ] ( [ parameter defined with ' T ' ] )
	 * 	{
	 * 		// body of function
	 * 	}
	 *
	 * 	Syntax 3: -
	 * 	auto [ function name ] ( [ parameter defined with ' std::[ built-in concepts ] auto ' ] )
	 * 	{
	 * 		//body of function
	 * 	}
	 *
	 * 	Syntax 4: -
	 * 	template <typename T>
	 * 	T [ function name ] ( [ parameter defined with ' T ' ] ) requires std::[ built-in concepts ]<T>
	 * 	{
	 * 		//body of function
	 * 	}
	 *
	 * 	Custom concepts: -
	 * 	---------------
	 *
	 *  Syntax 1: -
	 * 	template <typename T>
	 * 	concept [ variable name ] = std::[ checking concepts ]<T>;
	 *
	 * 	Syntax 2: -
	 * 	template <typename T>
	 * 	concept [ variable name ] = requires ( [ parameter defined with ' T ' ] )
	 * 	{
	 * 		// valid syntax
	 * 	};
	 *
	 *
	 * 	Note: If it is an custom concepts then we don't have to mention std:: when declaring.
	 * 		  We can logically combine concepts i.e., && || !.
	 *
	 * */

	std::cout<<"Result of syntax 1: "<<add(10,20)<<std::endl;
	std::cout<<"Result of syntax 2: "<<mul(12,34)<<std::endl;
	std::cout<<"Result of syntax 3: "<<sub(56,56)<<std::endl;
	std::cout<<"Result of syntax 4: "<<pow(2,4)<<std::endl;
	return 0;
}
