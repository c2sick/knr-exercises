#include <stdio.h>
/* write a program which looks for "string of blanks". 
 * and replace it with equal amout of tabs and/or blanks.
 *  
*/
#define TABWIDTH 8
int main(void) 
{
	int c, col, space;
	col = space = 0;
	while ((c = getchar()) != EOF)
	{//push column for checking
		col++;
		
		if (c == ' ')
		{//promote space for first space indicator  
			space++;

			if (col % TABWIDTH == 0 && space > 0)
			{
				putchar('\t');
				space = 0;	/*reset for tab use*/
			}
		}
		else
		{//output extra spaces
			while (space > 0)
			{
				putchar(c);
				space--;
			}

				if (c == '\n')
				{//reset for \n
					col = 0;
					space = 0;
				}
				putchar(c);
		}	
	}
	return 0;
}