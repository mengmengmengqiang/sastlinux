/**
	File Name: copy.c
	Author: zhy
	Created Time: 2017/02/25 - 19:21:13
*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	if (argc != 3) {
		printf("input error\n");
		exit(1);
	}
	int read_fd = open(argv[1], O_RDONLY);
	if (read_fd == -1) {
		perror("open");
		exit(1);
	}
	int write_fd = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (write_fd == -1) {
		perror("open");
		exit(1);
	}
	char buffer[1024];
	int length;
	while((length = read(read_fd, buffer, 1024)) > 0) {
		write(write_fd, buffer, length);
	}
	return 0;
}


















