#include <stdio.h>
int main()
{
	int a[11]={32,-1,0,32,100,66,66,-7,100,0,-1};
	int i,result =0;
	for( i=0;i<11;i++)
	{
		result^=a[i];
	}
	printf("find value=%d\n",result);
	return 0;
}
