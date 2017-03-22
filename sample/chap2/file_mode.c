/**
	File Name: file_mode.c
	Author: zhy
	Created Time: 2017/03/09 - 10:08:01
*/
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("input error\n");
		exit(1);
	}
	struct stat file;
	if(stat(argv[1], &file) == -1) {
		perror("stat");
		exit(1);
	}
	if (S_IRUSR & file.st_mode) {
		printf("user can read!\n");
	}
	else {
		printf("user can not read!\n");
	}
	return 0;
}
