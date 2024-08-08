#include<fcntl.h>
#include<sys/stat.h>
#include<stdio.h>
int main(void) {
	// This will only work for current directory
	const char * pathname = "dir1";
	mode_t mode = 0664;
	if (mkdir(pathname, mode) != -1) {
		printf("Directory Created");
	}
	return 0;
}
