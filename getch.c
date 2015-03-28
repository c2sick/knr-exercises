#include <stdio.h> // copy input to output, raplace blanks with single blank.

main() {

char c, l; 

l = 0; 

	while ((c = getchar()) != EOF)
	{
		if (c != ' ')						//if c is not blank.
			putchar(c);						//put c.
		else if (c == ' ' && l != ' ')		//if c is a blank & c. (&& means both, no restriction)
			putchar(c);						//put c.
		l = c;								//assign c to l.
	}
	 return 0;
}
