#include <stdio.h>
int main()
{
    int m,n,temp,num1,num2,t;
	printf("��������������\n"); 
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
	printf("���Լ��Ϊ��%d\n",m);
	printf("��С������Ϊ��%d\n",num1*num2/m);
	return 0;	
 } 
