#include <stdio.h>

float power(float, float);
int main()
{
	float i;

	for(i=0; i <=10; ++i)
		printf("%d\t %f\t %f\n", i, power(2,i) power(3,i));
	return 0;
}
float power(float base, float n)
{
	float p;
	
	for(p=1; n>0; --n)
		p=p*base;
	return p;
}
