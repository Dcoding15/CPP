#include<unistd.h>
#include<fcntl.h>
#include<climits>
#include<cstring>
#include<iostream>

/*
 * System Call: It is a programmatic way in which a computer program request a service from kernel to interact with the operating system.
 *
 *
 *
 * */

int main(int argc, char ** argv)
{
	// WRITE SYSCALL - refer manual section 2 of write, open (file descriptor part)
	// Syntax - write(file descriptor, character array buffer, no. character in buffer)
/*	char tsrt[] = "Hello, World\n";
	write(O_WRONLY, rstr, strlen(rstr));
*/	
	// READ SYSCALL - refer manual section 2 of read, open (file descriptor part)
	// Syntax - read(file descriptor, character array buffer, size of buffer)
/*	int buffer_size = SHRT_MAX;
	char rstr[buffer_size]; // raw string
	int count = read(O_RDWR, rstr, buffer_size);
	write(O_RDWR, rstr, count);
*/	
	// OPEN SYSCALL AND CLOSE SYSCALL - refer manual section 2 of open, close
	// Syntax - create(path name in raw string, mode of that file);
	// Syntax - open(path name in raw string, file descriptor, mode of that file);
	const char * pathname = "abc.txt";
	char rstr[] = "I'am using linux - debian 12\n";	
	//int fd = creat(pathname, 00750); 	// Only for creating files
/*	int fd = open(pathname, 1 | 64 | 1024, 00750);
	write(fd, rstr, strlen(rstr));
	close(fd);
*/
	// CREATE CHILD PROCESS
	pid_t pid;
    pid = fork();
    switch (pid) {
    case -1:
			perror("fork");
            exit(EXIT_FAILURE);
    case 0:
            puts("Child exiting.");
            exit(EXIT_SUCCESS);
    default:
            printf("Child is PID %jd\n", (intmax_t) pid);
            puts("Parent exiting.");
            exit(EXIT_SUCCESS);
	};

	// EXIT SYSCALL
	_exit(0);
	return 0;
}

/*
 *
 * Mode: -
 * Syntax - 00[ user ][ group ][ other ]
 * 1 - Only execute
 * 2 - Only write
 * 3 - write, execute
 * 4 - Only read
 * 5 - read, execute
 * 6 - read, write
 * 7 - read, write, execute
 * 
 * File Descriptor: -
 * read only - 0
 * write only - 1
 * read write - 2
 * create only - 64
 * append only - 1024
 *
 * */
