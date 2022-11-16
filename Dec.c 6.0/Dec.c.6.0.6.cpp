#include <stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
	  if(a>b)
	  printf("%c\n",'L');
	  else  
	  printf("%c\n",'=');
    } 
    else (a<b);
    printf("%c\n",'s');
	return 0;
 } 
