/**
	File Name: argv.c
	Author: zhy
	Created Time: 2017/02/21 - 12:05:06
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	for(int i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	printf("argv[%d] = %s\n", argc, argv[argc]);
	return 0;
}
