/**
	File Name: open.c
	Author: zhy
	Created Time: 2017/02/21 - 19:51:21
*/
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	fd = open("argv.c", O_RDONLY);
	printf("fd = %d\n", fd);
	close(fd);
	return 0;
}
