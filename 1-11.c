#include <stdio.h> //write a program to print one word per line.

int main()
{
	int c;
	c = getchar();
	while(c != EOF)
	{
		if(c == ' ')
			putchar('\n');
		else
			putchar(c);

		c = getchar();
	} 
}