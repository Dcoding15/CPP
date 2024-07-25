#include<stdio.h>	// Use for standard input and output
#include<stdbool.h>	// Use for boolean
int main(int argc, char* argv[])
{
	/*
	 * char		-> single character
	 * bool		-> boolean (true or false)
	 * int		-> integer
	 * float	-> single precision floating point
	 * double	-> double precision floating point
	 * */
	/*
	 * Data Modifiers: -
	 * --------------
	 *  long		-> more data type
	 *  short		-> 
	 *  signed		-> 
	 *  unsigned	-> integer starting from 0 to positive 
	 * */
	int a;
	long b;
	short c;
	char d;
	float e;
	double f;
	bool g;

	printf("Size of int     -> %d bytes\n",sizeof(int));
	printf("Size of long    -> %d bytes\n",sizeof(long));
	printf("Size of short   -> %d bytes\n",sizeof(short));
	printf("Size of char    -> %d byte\n",sizeof(char));
	printf("Size of bool    -> %d bit\n",sizeof(bool));
	printf("Size of float   -> %d bytes\n",sizeof(float));
	printf("Size of double  -> %d bytes\n",sizeof(double));

	/*
	 * %hd		-> short integer
	 * %hu		-> unsigned short integer
	 * %u		-> unsinged integer
	 * %d		-> integer
	 * %ld		-> long integer
	 * %lu		-> unsigned long integer
	 * %lld		-> long long integer
	 * %llu		-> unsinged long long integer
	 * %c		-> character
	 * %s		-> string
	 * %f		-> float
	 * %lf		-> double
	 * %Lf		-> long double
	 * */

	return 0;
}
