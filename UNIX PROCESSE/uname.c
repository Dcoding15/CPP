#include <stdio.h>
#include <sys/utsname.h>
int main(void) {
    struct utsname buffer;
    if (uname(&buffer) == 0) {
        printf("System name: %s\n", buffer.sysname);
        printf("Node name: %s\n", buffer.nodename);
        printf("Release: %s\n", buffer.release);
        printf("Version: %s\n", buffer.version);
        printf("Machine: %s\n", buffer.machine);
	}
	return 0;
}
