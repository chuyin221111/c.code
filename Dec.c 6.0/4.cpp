#include <stdio.h>
int main ()
{
	int i,r,n;
	printf("����һ��������5λ��������\n"); 
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
		printf("һ��%d",n);	 
		}
	//	printf("һ��%d",n);	
	}
	return 0;
}
