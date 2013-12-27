#include "stdio.h"
#include "stdlib.h"
#include "fcntl.h"
#include "unistd.h"
#include "errno.h"
#include "string.h"

int main (void){
	int fd;
	errno = 0;

	fd = open ("/home/admin/nothing.txt",O_RDWR);

	if (errno == 0)
		printf("Successful\n");
	else{
		printf("fail to open,error is :%s\n",strerror(errno));
		exit(1);
	}

	close(fd);

	return 0;
}
