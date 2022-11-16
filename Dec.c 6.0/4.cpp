#include <stdio.h>
int main ()
{
	int i,r,n;
	printf("输入一个不多于5位的正整数\n"); 
	scanf("%d",i);
   if(i>0)
   {
   	 for( n=0;n<=5;n++)
   	  {
   	  	do
   	  	{   
   	  	   r=i%10;
   	  	   printf("%d",r);
			 }while((i/=10)!=0);
		printf("一共%d",n);	 
		}
	//	printf("一共%d",n);	
	}
	return 0;
}
