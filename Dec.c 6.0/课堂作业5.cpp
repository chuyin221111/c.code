#include <stdio.h>
int main ()
{
	int a[11]={32,-1,0,32,100,66,66,-7,100,0,-1}; 
	int i,j;
	for(i=0;i<11;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[i]!=0&&a[i+j]!=0)
			{
				break;
			}
			if(a[i]!=a[i+j]&&a[i]^a[i+j]!=0)
			{
				printf("%d",a[i]);
			}
			else if(a[i]==0&&a[i+j]==0)
			{
				break;
			}
			else if(a[i]==0&&a[i+j]!=0)
			{
				printf("%d",a[i]);
			}
		}
	}
	return 0;
 } 
