/**
	File Name: fork_copy_on_write.c
	Author: zhy
	Created Time: 2017/03/09 - 12:15:35
*/
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid;
	char str[] = "hello,world\n";
	if ((pid = fork()) == 0) {
		//str[1] = 'c';
		printf(str);
	}
	else {
		printf(str);
	}

	return 0;
}
