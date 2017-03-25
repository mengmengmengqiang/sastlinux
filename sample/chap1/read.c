/**
	File Name: read.c
	Author: zhy
	Created Time: 2017/02/21 - 19:55:16
*/
#include <stdio.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int fd;
	char buffer[512];
	memset(buffer, 0, 512);
	fd = open("argv.c", O_RDONLY);
	printf("fd = %d\n", fd);
	while((read(fd, buffer, 512)) > 0) {
		printf("%s", buffer);
		memset(buffer, 0, 512);
	}
	close(fd);
	return 0;
}
