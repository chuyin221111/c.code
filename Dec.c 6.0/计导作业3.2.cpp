#include <stdio.h>
int main()
{
  int c[100],c1[2],i=0,d;
  double n,f;
  printf("请输入一个十进制的数：\n"); 
  scanf("%lf",&n);
  d=(int)n;
  do
  {
  	c[i++]=d%2;
  	d/=2;
   } while(d!=0);
   
   for(i--;i>=0;i--)
   {
   	printf("%d",c[i]);
   }
   	if((n-(int)n)>0)
   	{  
   	   printf(".");
   	 }
   	 f=n-d;
   	 i=0;
   	 while((f-(int)f!=0))
    {
    	f=(f-(int)f)*2;
		c1[i]=(int)f;
		i++; 
	}
	 
	for(i=0;i<2;i++)
	{
		printf("%d",c1[i]);
		
	 }			         
  return 0;	
}
