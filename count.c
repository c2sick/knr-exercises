#include <stdio.h>

main()	//count characters in input, 1st version
{
	long nc;	//declare var "nc" as "long int", atleast 32 bits 
	nc = 0;			

	while (getchar() != EOF )	
		++nc;
	printf("%ld\n", nc);
	//this should 
}