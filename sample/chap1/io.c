/**
	File Name: io.c
	Author: zhy
	Created Time: 2017/02/25 - 20:04:08
*/
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	//printf("start ....");
	//printf("start ....\n");
	write(1, "start....", 10);
	sleep(3);
	printf("finish ....");
	return 0;
}
