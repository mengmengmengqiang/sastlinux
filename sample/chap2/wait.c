/**
	File Name: wait.c
	Author: zhy
	Created Time: 2017/03/09 - 13:20:45
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	pid_t pid;
	if ((pid = fork()) == 0) {
		sleep(5);
		printf("here is child process\n");
	}
	else {
		int stat;
		wait(&stat);
		printf("child process exit status is %d\n", stat);
		while(1) {
			printf("here is parent process\n");
			sleep(4);
		}
	}
	return 0;
}
