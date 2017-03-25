/**
	File Name: filetype.c
	Author: zhy
	Created Time: 2017/02/26 - 12:27:33
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
	stat(argv[1], &file);
	if (S_ISREG(file.st_mode)) {
		printf("regular file\n");
	} else {
		printf("not a regular file\n");
	}
	return 0;
}
