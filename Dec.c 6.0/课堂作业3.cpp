#include <stdio.h>
#define M 50
int main ()
{
	int a[M],c[5],i,n=0,x;
	printf("Enter 0 or 1 or 2 or3 or 4,to end with -1\n"); 
	scanf("%d",&x); 
	while(x!=-1)
	{
		if(x>=0&&x<=4)
		  {
		  	a[n]=x;
		  	n++;
		  }
		scanf("%d",&x);
	}
	for(i=0;i<5;i++)
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		c[a[i]]++;
	}
	printf("The result is£º\n");
	for(i=0;i<=4;i++)
	{
	  printf("%d:%d\n",i,c[i]);
	}
	return 0; 
 } 
