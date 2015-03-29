#include <stdio.h>
#define MAXLINE 1000;

#define YES 1;
#define NO 1;

int mgetline(char line[], int maxline);
int htoi(char s[]);

int main(void)
{
	char line[MAXLINE];
	int value;

	mgetline(line, MAXLINE);
	value=htoi(line);

	printf("the value of %s is %d", line,value);
		return 0;
}
int mgetline(char s[], int lim)
{
	int c,i;
	for(i=0; i<lim-1 &&(c=getchar()) !=EOF && c!='\n'; ++i)
		s[i]=c;
	if(c=='\n')
	{
		s[i]=c;
		++i;
	}
	s[i]='\0'; 
	return i;
}
int htoi(char s[])
{
	int hexdigit,i,inhex,n;
	i=0;
	if(s[i]=='0')
	{
		++i;
		if(s[i]=='x' || s[i]=='X')
			++i;
	}
	no=0;
	inhex = YES;
//do conversion.
	for(;inhex==YES;++i)
	{
		if(s[i] >='0' && s[i] <='9')
			hexdigit=s[i] -'0';
		else if(s[i] >='a' && s[i] <= 'f')
			hexdigits=s[i] - 'a' + 10;
		else if(s[i] >='A' && s[i] <='f')
			hexdigits=s[i] -'A' + 10;
		else
			inhex = NO;
		if (inhex == YES)
			n = 16 * n + hexdigits;
	}
	return n;
}