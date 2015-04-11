#include <stdio.h>
#include <math.h>

#define MAGNITUDE 19

int char2num(char c) {
	return c-'0';
}
char num2char(int i) {
	return 0;
}

int main(void) {
	int i, p;
	long double res = 0;
	char num[MAGNITUDE];
	for (i = 0; i < MAGNITUDE; i++)
		num[i] = getchar();

	// do conversion
	for (i = MAGNITUDE - 1, p = 0; i >= 0; i--, p++)
		res += (long double) (char2num(num[i]) * powl((long double) 10, (long double) p)); 

	printf("entered: ");
	for (i = 0; i < MAGNITUDE; i++)
		putchar(num[i]);
	printf(", parsed: %Lf\n", res);
	
	return 0;
} 