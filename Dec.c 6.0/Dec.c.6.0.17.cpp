#include <stdio.h>
int main()
{
    int m,n,temp,num1,num2,t;
	printf("请输入两个数：\n"); 
	scanf("%d%d",&m,&n);
    num1=m;
	num2=n; 
	if(num1<num2)
	{  
	   temp=num1;
	   num1=num2;
	   num2=temp;		
	}
    while(n!=0)
	{
	   t=m%n;
	   m=n;
	   n=t;
    }
	printf("最大公约数为：%d\n",m);
	printf("最小公倍数为：%d\n",num1*num2/m);
	return 0;	
 } 
