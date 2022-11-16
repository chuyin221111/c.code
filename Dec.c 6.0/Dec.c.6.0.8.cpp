#include   <stdio.h>
int main()
{
    unsigned int a;
    int s;
	printf("请输入一个正数:\n");
	scanf("%d",&a);
	s=a%3;
	switch (s)
	{
	  case0:
	  	printf("1");
	  	break;
	  case!0:
	    printf("0");
	    break;
	  default:
	    printf("error");
		break; 
	}
	  return 0;
	
 } 
