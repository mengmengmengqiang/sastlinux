/**
	File Name: errno.c
	Author: zhy
	Created Time: 2017/02/21 - 19:47:02
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, char *argv[])
{
	if(open("/123321", O_RDONLY) == -1) {
		perror("open");
		exit(1);
	}
	return 0;
}
