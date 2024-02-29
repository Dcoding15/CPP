#include<iostream>
using namespace std;

int add(int a, int b)
{
	return (a+b);
}

int main(int argc, char **argv)
{
	/* Syntax for statement */

	// [ data type ] [ variable name ] {[ variable value ]};
	// It may contain random garbage values.

	int num1 {10};	// Same as int num1 = 10;
	int num2 {20};	// Same as int num2 = 20;
	cout<<num1<<" + "<<num2<<" = "<<add(num1, num2)<<endl;

	return 0;


	/*

	Note: we can use () instead of {}, but it is less safe because loss of information can occurs.

	*/
}
