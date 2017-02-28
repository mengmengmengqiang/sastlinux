/**
	File Name: auto_close.c
	Author: zhy
	Created Time: 2017/02/26 - 12:08:24
*/
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, char *argv[])
{
	int fd = open("/home/zhy/git/collectd.txt", O_RDONLY);
	printf("fd = %d\n", fd);
	return 0;
}
