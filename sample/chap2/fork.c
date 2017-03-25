/**
	File Name: fork.c
	Author: zhy
	Created Time: 2017/03/09 - 11:51:24
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(int argc, char *argv[])
{
	pid_t pid;
	if((pid = fork()) == 0) {
		printf("child pid = %d\n", getpid());
		printf("child ppid = %d\n", getppid());
	} else {
		printf("parent pid = %d\n", getpid());
	}
	return 0;
}
