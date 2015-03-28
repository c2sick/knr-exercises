#include <stdio.h>
#define LEN 5
#define WID 5
long power(long, long);

int main()
{
	long i, j;

	for(i=1; i <=LEN; ++i)
	{
		for(j=1; j<=WID; ++j)
			printf("%ld\t", power(i, j));
		printf("\n");
	}
	return 0;
}
long power(long base, long n)
{
	long p = 1;
	n *= -1;
	// do multiplication n times
	while ((int)n++)
		p=p*base;
	return p;
}
