#include <stdio.h>

int main(void)	//show signed and unsigned of "char, short, int, long"
{
	printf("min sign char %d\n", -(char)((unsigned char) ~0 >> 1) -1);
	return 0;

}