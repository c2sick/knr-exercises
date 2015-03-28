#include <stdio.h>	//header, <stdio.h> links to input/output library 
 
main() //temperature converter in a while loop, 1st version
{
	printf("hello, world! fuckers\n");	//statement. 

	float fahr, celsius;	//declare your variables 
	int lower, upper, step;	

	lower = 0;	//initialize your var's
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)	//
	{
		celsius = (5.0/9.0) * (fahr-32.0); 
		printf("%3.0f \t %6.1f \n", fahr, celsius);
		fahr = fahr + step;
	}



}