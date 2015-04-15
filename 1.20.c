#include <stdio.h>
/* write a program that replaces tabs with blanks equal to it.
 * assume tabstops are equal, say every 't' colums. should t
 * be a symbolic constant or a variable?
 * constant. 
 */
#define TABWIDTH 4
/* program name: de-tab 
*/
int main(void)
{
	int col, c;
	col = 0;
	while ((c = getchar()) != EOF)
	{//check char for tab 
		if (c == '\t')
		{// routine for replacing tab with blank
			/*
			 * divide a line by Tabwidth and you have your tabstops.
			 * if you modulo by tabwidth and it equals 0, youve reached
			 * a tabstop and dont need to output more spaces!
			 */
			while (col % TABWIDTH != 0 && col != 0)
			{
				putchar(' ');
				++col;
			}
		}
		else // routine for non-tab.
		{
			if (c == '\n')
			{
				// reset column for newline
				putchar(c);
				col = 0;
			}
				else 
				{
					// print output then increase col
					putchar(c);
					++col;
				}
		}
	}
	return 0;
}
