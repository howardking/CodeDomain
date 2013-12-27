#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>

#define _NR_gettid 224

int main(int argc, char * argv[])
{
	pid_t pid;

	pid = syscall(_NR_gettid);
	
	printf("Pid = %u\n",pid);
	printf("Pid = %ld\n",syscall(SYS_gettid));
	return 0;
}
