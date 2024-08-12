#include<stdio.h>
#include<unistd.h>
#include<limits.h>
int main(void) {
	char buff[PATH_MAX];
	if (getcwd(buff, sizeof(buff)) != NULL) {
		printf("Current Working directory: %s",buff);
	}
	return 0;
}
