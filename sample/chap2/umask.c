/**
	File Name: umask.c
	Author: zhy
	Created Time: 2017/03/09 - 10:41:23
	*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	umask(0);
	if(open("new_file1", O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP) == -1) {
		perror("open");
		exit(1);
	}
	umask(S_IRUSR);
	if(open("new_file2", O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP) == -1) {
		perror("open");
		exit(1);
	}
	return 0;
}
