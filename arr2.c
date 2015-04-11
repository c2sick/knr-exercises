#include <stdio.h>
//count digits, whitespace, others 
main()
{
	int c,i,dig,ws,o;
	int ndig[10];
	ndig[10]=0;
	ws=o= 0;
	
	while(c=getchar()!=EOF) {
		if(i=0; i<=10; ++i)
			++ndig[10];
		else if(c=='\n'||c=='\t'||c==' ')
			++ws;
		else 
			++o;
	printf("%d\n%d\n%d\n",dig,ws,o);
	}
}