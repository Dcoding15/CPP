#include<unistd.h>
int main()
{
	int size = 50;
	char arr[size];
	read(0, arr, size);		// System read output
	write(1, arr, size);	// System write output
	_exit(0);				// System exit
	return 0;
}
