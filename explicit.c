#include<stdio.h>

int main(void)
{
  int c;
  char t, b, bs;


  while((c=getchar())!=EOF)
  {
    if(c=='\t')
    {
      printf("\\t");
    }
    if(c=='\b')
    {
      putchar('\\');
      putchar('b');
    }
    if(c=='\\')
    {
      putchar('\\');
      putchar('\\');
    }

    if(c !='\t' && c !='\b' && c!= '\\')
      putchar(c);
  }

return 0;

}