#include<stdio.h>

/*
 * Bitwise Operator: -
 * 		&	-->	AND
 * 		|	-->	Inclusive OR
 * 		^	-->	Exclusive OR
 *		>>	-->	left shift
 *		<<	-->	right shift
 *		~	-->	one's complement
 *	Ternary Operator: [Expression] ? [Statement if true] : [Statement if false]
 *
 * Uranary Operator: -
 * 		-			--> It is use to represent 
 * 		++			--> increment by 1
 * 		--			--> dcrement by 1
 * 		!			--> NOT Logical
 * 		&			--> Addressof operator is use to store address of variables.
 *		sizeof()	--> It returns size of operands in bytes.
 * */

void arithematic_operations()
{
	int a = 10, b = 5;
	printf("Arithematic Operations: -\n");
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d % %d = %d\n",a,b,a%b);
}

void relational_operations()
{
	int a = 10, b = 5;
	// &&	--> AND Logical
	// ||	--> OR Logical
	// !	--> NOT Logical
	printf("Relational Operations; -\n");
	printf("%d > %d  = %d\n",a,b,a>b);
	printf("%d >= %d = %d\n",a,b,a>=b);
	printf("%d < %d  = %d\n",a,b,a<b);
	printf("%d <= %d = %d\n",a,b,a<=b);
	printf("%d == %d = %d\n",a,b,a==b);
	printf("%d != %d = %d\n",a,b,a!=b);
}

void uranry_operations()
{
	int a = 10;
	a++;									// First assign then increment
	printf("Post Increment = %d\n",a);
	a = 10;
	printf("Pre Increment  = %d\n",++a);	// First increment then assign
	a = 10;
	a--;									// First assign then decrement
	printf("Post Decrement = %d\n",a);
	a = 10;
	printf("Pre Decrement  = %d\n",--a);	// First decrement than assign
}

int main(int argc, char* argv[])
{
	arithematic_operations();
	relational_operations();
	uranry_operations();
	return 0;
}
