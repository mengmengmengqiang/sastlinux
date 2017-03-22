/**
	File Name: id.c
	Author: zhy
	Created Time: 2017/03/09 - 11:47:07
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	printf("uid = %d\n", getuid());
	printf("pid = %d\n", getpid());
	printf("ppid = %d\n", getppid());
	return 0;
}
