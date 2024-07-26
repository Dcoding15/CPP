/*
 * errno.h - It is a header file for error reporting facilities.
 *
 * volatile int errno --> It contain system error number and we can change its value.
 *
 * Initial value of errno is 0.
 *
 * */

#include<stdio.h>
#include<errno.h>

int main(int argc, char* argv[]) {
	printf("%d\n",EPERM);
}
