/**
	File Name: big_endian.c
	Author: zhy
	Created Time: 2017/02/21 - 12:14:13
*/
#include <stdio.h>
typedef struct {
	short a;
	short b;
}test;
int main(int argc, char *argv[])
{
	test demo = {0,1};
	printf("%d\n",*(int*)&demo);
	return 0;
}

/**
 * a 00000000 00000000
 * b 00000001 00000000
 *
 * int(小)  00000000 00000000 00000001 00000000 
 * int(大)  00000000 00000001 00000000 00000000
 *
 *
 */
