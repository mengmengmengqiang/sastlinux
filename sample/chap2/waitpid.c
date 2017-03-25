/**
	File Name: waitpid.c
	Author: zhy
	Created Time: 2017/03/17 - 21:16:27
*/
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
	pid_t pid1, pid2;
	if((pid1 = fork()) == 0) {
		printf("here is process 1, pid = %d\n", getpid());
		sleep(6);
		printf("pid1 exit!\n");
		return 0;
	}
	if((pid2 = fork()) == 0) {
		printf("here is process 2, pid = %d\n", getpid());
		sleep(3);
		printf("pid2 exit!\n");
		return 0;
	}

	int statloc;
	printf("start wait pid2 \n");
	waitpid(pid2, &statloc, 0);
	printf("main exited!\n");
	return 0;
}
