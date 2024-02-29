#include<iostream>

// Here above the main function we can declare and define both.
// [ data type ] [ variable name ]([ parameter if any ]);

// Example of function parameter by value
int sod(int a)
{
	int sod = 0;
	while(a > 0)
	{
		sod += (a%10);
		a /= 10;
	}
	return sod;
}

// Example of function parameter by pointer
int facto(int * a)
{
	if(*a <= 1)
	{
		return 1;
	}
	else if(*a > 1)
	{
		int num1 = *a-1;
		return facto(&num1) * *a;
	}
}

// Example of function parameter by reference
int sonn(int & range)
{
	int sum = 0;
	for(int i = 1; i <= range; i++)
	{
		sum += i;
	}
	return sum;
}
/*
 * Sum of natural numbers: (n * (n+1)) / 2
 * Sum of square of natural number: (n * (n+1) * (2*n + 1)) / 6
 * Sum of cube of natural number: (pow(n,2) * pow(n+1, 2)) / 4
 *
 * */

// Example of structure
struct point3d
{
	double x_axis;
	double y_axis;
	double z_axis;
};

// Example of enum
enum week_days { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

// Example of function templates
template <typename T>
T max(T a, T b)
{
	return a > b ? a : b;
}

int main(int argc, char **argv)
{
	/*
	 * Function: -
	 * 	1. A function is  block of code that performs some operations.
	 * 	2. It can also define input parameters or it can define with no input parameters.
	 * 	3. It can optional return value as well as output.
	 *
	 * Syntax (with input parameter): -
	 * [ data type ] [ variable name ]( [ data type ] paramter_1, [ data type ] parameter_2, [ data type ] parameter_3, ... , [ data type ] parameterN )
	 * {
	 * 		statement-1
	 * 		statement-2
	 * 			.
	 * 			.
	 * 			.
	 * 		statement-N
	 * 		return [ value ];
	 * } 
	 * 
	 * Syntax (without input parameter)
	 * [ data type ] [ variable name ]( )
	 * {
	 * 		statement-1
	 * 		statement-2
	 * 			.
	 * 			.
	 * 			.
	 * 		statement-N
	 * 		return [ value ];
	 * }
	 *
	 * Structure: -
	 * ---------
	 *  Syntax: struct [ variable name ]
	 *  		{
	 *  			[ data type ] [ variable name ];
	 *  						 .
	 *  						 .
	 *  						 .
	 *  						 .
	 *  						 .
	 *  		};
	 *
	 *  		[ struct variable ] [ other variable name ] = [ value for other variable ];
	 *
	 *  Enumeration: -
	 *  Syntax: enum [ variable name ]
	 *  		{
	 *  			[ sequence of variables. We can also provide value exceptionally and it is optional ];
	 *  		//	value1, value2, ... , valueN;
	 *  		//    0   ,    1  , ... ,  N-1; <-- Bydefault value respectively
	 *  		};
	 *			
	 *			[ enum variable ] [ other variable name ] = ;
	 *
	 * */

	// We can call user defined function only in main function
	
	int num1 = 1234;
	std::cout<<"Sum of digits are "<<sod(num1)<<std::endl;

	int num2 = 5;
	std::cout<<"Factorial is "<<facto(&num2)<<std::endl;

	int num3 = 10;
	std::cout<<"Sum of natual numbers are "<<sonn(num3)<<std::endl;

	// Structure
	point3d a;
	a.x_axis = 56.4;
	a.y_axis = 89.4;
	a.z_axis = 84.15;

	std::cout<<"X axis: "<<a.x_axis<<std::endl;
	std::cout<<"Y axis: "<<a.y_axis<<std::endl;
	std::cout<<"Z axis: "<<a.z_axis<<std::endl;

	// Enumeration
	for(int i = MONDAY; i <= SUNDAY; i++)
	{
		std::cout<<i<<" ";
	}
	std::cout<<std::endl;

	// Lambda Funtions / Anonymous Functions
	/*
	 * Synatax: -
	 * [ data type ]  [ variable name ] = [ [data variable] ]( parameters ) -> [ return type ]
	 * {
	 * 		// statement
	 * };
	 *
	 * [ variable name ]();  <--- calling lambda function
	 *
	 * Calling lambda function directly: -
	 * --------------------------------
	 *
	 *  [ [data variable] ]( parameters ) -> [ return type ]
	 *  {
	 *  	// statements
	 *  }( arguments );
	 *
	 *  Note: -
	 *  1. To capture data by value just put = sign inside []
	 *  2. To capture data by refrence just put & sign inside []
	 *
	 * */
	
	// Example calling lambda function using variable
	auto sumof2numbers = [](int a, int b) -> int
	{
		return a+b;
	};

	std::cout<<"Sum of two numbers are "<<sumof2numbers(10,20)<<std::endl;

	// Example of calling lambda function directly
	[](double a, double b) -> double
	{
		std::cout<<"Multiple of two numbers are "<<a*b<<std::endl;
		return 0.0;
	}(12.23,34.21);

	// Function Templets: -
	// 	1. Function templates are just blueprints, they aren't real functions by declaration and definition.
	// 	2. When we call that function with argument then template instance are created.
	// 	3. If we set a typename T with a variable then data type for all that variable will be same.
	// 	4. We can't pass pointer variable or function with function template.
	/*
	 * Syntax: -
	 * template <typename T>
	 * T [ function_name ] ( [ parameters defined with ' T ' ] )
	 * {
	 * 		//statement
	 * }
	 *
	 * Syntax using reference: -
	 * template <typename T>
	 * const T & [ function name ] ( [ parameters defined with ' const T & ' ] )
	 * {
	 * 		//statement
	 * }
	 *
	 * Syntax using const char *: -
	 * template <>
	 * const char * [ function name ] ( [ parameters defined with ' const char * ' ] )
	 * {
	 *		//statement
	 * }
	 *
	 * Note: It will operation  performed using const char * data types
	 *
	 * Calling template function (1st way) : max( [arguments] )
	 * Calling template function (2nd way) : max< [data type] >( [arguments] ) 
	 *
	 * */

	std::cout<<"Function Template (1st way): "<<max(1,256)<<std::endl;
	std::cout<<"Function Template (2nd way): "<<max<double>(45.20,4.23)<<std::endl;

	return 0;
}

