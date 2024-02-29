#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	int binary_rep {0b11000011100};
	int decimal_rep {1564};
	int octal_rep {03034};
	int hexadecimal_rep {0x61C};

	cout<<binary_rep<<endl;
	cout<<decimal_rep<<endl;
	cout<<octal_rep<<endl;
	cout<<hexadecimal_rep<<endl;

	cout<<"Size of short: "<<sizeof(short)<<" bytes"<<endl;
	cout<<"Size of int: "<<sizeof(int)<<" bytes"<<endl;
	cout<<"Size of long: "<<sizeof(long)<<" bytes"<<endl;
	cout<<"Size of float: "<<sizeof(float)<<" bytes"<<endl;
	cout<<"Size of double: "<<sizeof(double)<<" bytes"<<endl;
	cout<<"Size of long double: "<<sizeof(long double)<<" bytes"<<endl;
	cout<<"Size of char: "<<sizeof(char)<<" byte"<<endl;
	cout<<"Size of bool: "<<sizeof(bool)<<" byte"<<endl;

	return 0;
}

/*

Types of data types: -

short			- 16 bits
int				- 32 bits
long			- 64 bits
float			- 32 bits (1 signed bit + 8 decimal bits + 23 factional bits) (single precision)
double			- 64 bits (1 signed bit + 11 decimal bits + 52 factional bits) (double precision)
long double		- 128 bits
char			- 1 bit
bool			- 1 bit	(1 - true | 0 - false)
void			- 0 bit
auto			- differs, complier evaulate data type by iteself

Note: postfix for long is l or L; float is f or F; unsigned is u or U.
	  we can use e notation in factional part.

Types of modifiers: -

signed		(both -ve and +ve numbers)
unsigned	(both +ve numbers)

Note: modifiers only for numbers.

*/

/*

In binary if we have n bits then we can represent 0 to 2^n - 1 numbers.

8-bits		--> 0 - 225
16-bits		--> 0 - 65,535
32-bits		--> 0 - 34,359,738,367
64-bits		--> 0 - 18,446,744,073,709,551,615

*/
