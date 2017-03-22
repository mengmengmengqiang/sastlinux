/**
	File Name: read_dir.c
	Author: zhy
	Created Time: 2017/03/09 - 11:23:39
*/
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("input error\n");
		exit(1);
	}

	DIR *dir = opendir(argv[1]);
	struct dirent *file;
	while((file = readdir(dir)) != NULL) {
		printf("%s\n",  file->d_name);
	}
	return 0;
}
