/**
	File Name: nowait.c
	Author: zhy
	Created Time: 2017/03/09 - 13:05:57
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	if(fork() == 0) {
		while(1) {
			sleep(4);
			printf("here is child process\n");
			printf("ppid  = %d\n", getppid());
		}
	}
	return 0;
}
