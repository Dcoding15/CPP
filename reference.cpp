#include<iostream>

int main(int argc, char ** argv)
{
	/*
	 * References(alias to variables): -
	 * ------------------------------
	 *  1. It is compulsory to initialise reference at the time of declaration.
	 *  2. It can't be initialise with NULL value.
	 *  3. It can't make array of references.
	 *  4. It can't create reference to reference.
	 *  5. Addresses of both other variable and reference variable point to that variable is same.
	 *  6. If value of reference or pointer variable is modified then value for both will be changed but address will be same.
	 *
	 *  Syntax: [ data type ] & [ variable name ] = [ other variable name ];
	 *
	 * */

	int num1 = 10;	// normal variable
	int & ref1 = num1;  // initialise reference
	
	std::cout<<"Value of ref1: "<<ref1<<std::endl;
	std::cout<<"Value of num1: "<<num1<<std::endl;
	std::cout<<"Address of ref1: "<<&ref1<<std::endl;
	std::cout<<"Address of num1: "<<&num1<<std::endl;

	ref1 = 20000;
	
	std::cout<<"Modified value of ref1: "<<ref1<<std::endl;
	std::cout<<"Value of num1: "<<num1<<std::endl;
	std::cout<<"Address of ref1: "<<&ref1<<std::endl;
	std::cout<<"Address of num1: "<<&num1<<std::endl;

	num1 = 3845;
	
	std::cout<<"Value of ref1: "<<ref1<<std::endl;
	std::cout<<"Modified value of num1: "<<num1<<std::endl;
	std::cout<<"Address of ref1: "<<&ref1<<std::endl;
	std::cout<<"Address of num1: "<<&num1<<std::endl;

	int num2 = 20;			 // Can modify because const is not applied
	const int & ref2 = num2; // Can't modify because const is applied

	num2 = 30;

	std::cout<<"Value of ref2: "<<ref2<<std::endl;
	std::cout<<"Value of num2: "<<num2<<std::endl;
	std::cout<<"Address of ref2: "<<&ref2<<std::endl;
	std::cout<<"Address of num2: "<<&num2<<std::endl;

	return 0;
}
