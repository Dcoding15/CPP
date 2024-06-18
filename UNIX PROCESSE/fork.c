#include<stdio.h>	// Contain standard input and output libraries
#include<unistd.h>	// Contain linux specific libraries
int main(int argc, char* argv[])
{
	/*
	 * For more info -> man 2 fork
	 *
	 * */
	int id = fork();
	printf("Process ID: %d\n",id);
	_exit(0);
}
