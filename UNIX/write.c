#include<unistd.h>
#include<string.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
	/*
	 * For more info -> man 2 write
	 *
	 * */
	const char * msg = "hello world\n";
	ssize_t msg_len = strlen(msg);
	int len = write(1,msg,msg_len);
	printf("No. of characters: %d\n",len);
}
