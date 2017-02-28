/**
	File Name: write.c
	Author: zhy
	Created Time: 2017/02/21 - 20:01:36
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
	fd = open("argv.c", O_RDONLY);
	printf("fd = %d\n", fd);
	int len;
	while((len = read(fd, buffer, 512)) > 0) {
		write(STDOUT_FILENO, buffer, len);
	}
	close(fd);
	return 0;
}
