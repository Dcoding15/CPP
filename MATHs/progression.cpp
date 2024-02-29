#include<iostream>

int main(int argc, char ** argv)
{
	/*
	 * Arithematic Progression ( AP ) : It is a sequence of numbers in which difference between successive term and preceding term has a common difference.
	 * Common Difference ( d ) : successive term - preceding term.
	 * Arithematic Series ( Sn ) : Sum of arithematic progression.
	 *
	 * first term of a sequence is denoted by a.
	 * nth term of a sequence is denoted by an.
	 * no. of elements is denoted by n.
	 *
	 * Formula to find nth term from begining: an = a + ((n - 1) * d)
	 * Formula to find nth term from ending  : a = an + ((n - 1) * d)
	 * Formula to find arithematic series    : Sn = (n * ( a + an )) / 2
	 *
	 *
	 * Geometric Progression ( GP ) : It is a sequence of a number such that the difference between successive term and preceding term has a common ratio.
	 * Common common ratio ( r ) : successive term / preceding term.
	 *
	 * first term of a sequence is denoted by a.
	 * nth term of a sequece is denoted by an.
	 *
	 * Formula to find nth term from begining: a * pow(r, n-1)
	 * Formula to find nth term from ending: an / (r * (n-1))
	 * Formula to find geometric series: -
	 * 		case 1: when r > 1,
	 * 							Sn = a * ( (pow(r,n) - 1) / (r - 1) )
	 * 		case 2: when r = 1,
	 * 							Sn = a * n
	 * 		case 3: when r < 1,
	 * 							S = a * ( (1 - pow(r,n)) / (1 - r) )
	 *
	 * 	Note: If b is a geometric mean of a and c, then b = sqrt(a * c)
	 *
	 *
	 * 	Sum of natural numbers: (n * (n+1)) / 2
	 *	Sum of square of natural number: (n * (n+1) * (2*n + 1)) / 6
	 *	Sum of cube of natural number: (pow(n,2) * pow(n+1, 2)) / 4
	 *
	 * */
	return 0;
}
