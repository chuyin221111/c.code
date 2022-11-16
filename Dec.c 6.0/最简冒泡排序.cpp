#include <stdio.h>
int main()
{
	int arr[9]={1,9,7,12,6,5,4,3,11};
	for(int i=0;i<8;i++)
	{
		for(int j=0;j=10-1-i;j++)
		{
			if(arr[i]>arr[j+1])
			{
				int t=arr[i]; 
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(int i=0;i<9;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
	
 } 
 
 
