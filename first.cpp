#include<iostream>		// contain standard I/O instructions

int main(int argc, char **argv)		//main() is the entry point
{
	std::cout<<"Hello, World!"<<std::endl;

	/* std means standard, it is a namespace which contain built-in classes and declared functions  */
	/* :: is a scope resolution operator */
	/* cout is character output which call write syscall */
	/* endl is end-line which create a new line feed */

	return 0;
}
