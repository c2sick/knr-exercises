#include <stdio.h> /*$$$$$$$$$s1.1 print hello world*/
#define title " Hello World"		/*s1.1*/
#define TC " temp converter"		/*s1.2*/

int main() {

	printf("Test:%s\nWork1:%s\n", title, TC);		/*title*/
	
	float low, high, incr, fahr, cels;		/*set var's*/
	
	low = 0;		/*begin at 0*/
	high = 100;		/*let max be 100*/
	incr = 20;		/*++ by 20*/

	fahr = low;	/*set conversion to 0*/
	while (fahr <= high ) { /*temp range && terminate*/
		cels = (5.0 / 9.0) * (fahr - 32.0);		/*while...do math*/
		//fahr = (5.0/9.0) * cels + 32.0;
		printf("%6.0f %9.0f \n", fahr, cels);	/*display*/
		fahr += incr;	/*add and continue*/
	}	
}
