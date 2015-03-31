#include <stdio.h>
#define MAXLINE 1000

int mgetline(char line[], int maxline);
int any(char s1[], char s2[]);

int main(void){//initialize test beacons.
	char s1[MAXLINE], s2[MAXLINE];
	int val;
	//give [s1,s2] input status.
	mgetline(s1,MAXLINE);
	mgetline(s2,MAXLINE);
	//set val to any to make an address. 
	val = any(s1,s2);
	printf("%d", val);
	return 0;
}
int mgetline(char s[], int lim){//set input paramaters 
	int i,c;
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i]=c;
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
}
int any(char s1[], char s2[]){//do checking for match.
	int i,j,nchar;
	nchar=1;
	for(i=0; s1[i]!='\0' && (nchar);){
		for(j=0; s2[j]!='\0' && (s1[i]!=s2[j]); ++j)
			;
		if(s2[j]=='\0'){
			nchar=1;
			++i;
		}
		else
			nchar=0;
	}
	if(s1[i]='\0')
		return -1;
	else 
		return i;
}