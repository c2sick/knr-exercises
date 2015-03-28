#include <stdio.h>

main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)	//line counting...is just counting new lines, '\n'
		if (c == '\n')
			++nl;
		printf("%d\n", nl);
}