#include <stdio.h> 

#define MIN 0	//create var's as constants 
#define MAX 300
#define STEP 20

main()	//temp converter in a for loop, 2nd version 
{
	printf("%3s \n", "hello world, fuckers!");
	
	int f;

	for(f = MAX; f >= MIN; f = f - STEP)	//loop with...initialize, test, increment. 
		;
		printf("%3d %6.1f \n", f, (5.0/9.0) * (f-32.0));
		printf("%3s \n", "hello world, fuckers!");

}