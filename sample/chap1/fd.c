/**
	File Name: fd.c
	Author: zhy
	Created Time: 2017/02/21 - 12:07:57
*/
#include <stdio.h>
#include <unistd.h>

#define BUFFER 1024
int main(int argc, char *argv[])
{
	char buffer[BUFFER] = "hello,world\n";
	write(1, buffer,BUFFER);
	return 0;
}
