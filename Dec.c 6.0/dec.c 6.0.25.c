 //����4���������ҳ�����������
#include <stdio.h>          
int max1(int n,int d)
{
	if(n>d)
	{
		return n;
	}
	else
	{
		return d;
	}
}
 int max2(int i,int c )
{
	if(i>c)
	{
		return i;
	}
	else
	{
		return c;
	}
}
int max3(int a ,int b)
{
   if(a>b)
   {
   	return a;
    }
	else
    {
	   return b;	
	}	   	
}

int max4(int a,int b,int c,int d )
{  
    int i,n,M;
   i=max3( a, b);
   n=max2(i,c);
   M=max1(n,d);
   return M;	
	
}

int main()
{    
   int a,b,c,d,m;
   printf("������4������,�ö��Ÿ�����\n");
   scanf("%d,%d,%d,%d",&a,&b,&c,&d);
   m=max4(a,b,c,d) ;
  printf("���ֵΪ%d",m);
	     
	return 0;
 } 
