#include <stdio.h> 

main()
{
	double nc;

	for(nc = 0; getchar() != EOF; ++nc)		//character counting 
	;
	printf("%.0f\n", nc); 
}