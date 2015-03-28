#include <stdio.h>

int main() //ex. 1-6]
{
	int c; 
	while ((c = getchar()) != EOF)  //verify that getchar() != EOF is 1 or 0. 
	{	printf("%d", c != EOF);
		putchar(c);
	}  
	//printf("\n%d\n", c != EOF);
}