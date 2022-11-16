#include <stdio.h>
int main ()
{
	int i,r,count=0;
	printf("请输入一个整数\n");
	scanf("%d",&i);   
	while(i>=100000)
	{
		printf("输入有误，请重新输入不多于5位数的正整数：");
		scanf("%d",&i); 
	}
	if(i>0) 
	{
	
		do
		{
		  r=i%10; 
		   printf("%d",r); 
          count++; 
		 } while((i/=10)!=0);
		printf("\n");		 
      	printf("一共有%d位数\n",count);
      	
	}  		 
	else
	{
		printf("输入错误，请重新输入不多于5位数的正整数"); 
	}

	
	return 0;
}
