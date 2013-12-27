#include "stdio.h"
#include "unistd.h"

int main (void){
	pid_t pid,ppid,uid,euid,gid,egid;

	pid = getpid();
	ppid = getppid();
	uid = getuid();
	euid = geteuid();
	gid = getgid();
	egid = getegid();

	printf("The current process :%u\n",pid);
	printf("The parrent id of process :%u\n",ppid);
	printf("userid of current process :%u\n",uid);
	printf("effective user of current process :%u\n",euid);
	printf("group id of current process :%u\n",gid);
	printf("effective group id of current process :%u\n",egid);
	return 0;
}
