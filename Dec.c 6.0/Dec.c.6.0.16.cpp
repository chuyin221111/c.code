#include <stdio.h>
  void fun(long int s, long*t)
  {
  	
  	int s1=1,d;
  	*t=0;
  	while(s)
  	{
  	   d=s%10;
	   if(d%2!=0)
	   {
	   	  *t=s1*d+*t;
	   	  s1*=10;
		}
		s/=10;	
  		
	  }
  }	
int main()	
{
		
	long int s,t;
	printf("������һ��������\n");
	scanf ("%ld",&s);
	fun(s,&t);
	printf("���µ�����:%d\n",t);
	return  0;
 } 
