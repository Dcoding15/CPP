#include<unistd.h>
int main()
{
	int size = 50;
	char arr[size];
	read(0, arr, size);
	write(1, arr, size);
	_exit(0);
	return 0;
}
