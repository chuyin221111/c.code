#include <stdio.h>
#include <string.h>
#include <math.h> 
int main()
{
	int j,k;
	char a[100];
	gets(a);
	int n=strlen(a);  //�����ַ������� 
	for(j=0;j<n;j++)
	{
		if(a[j]=='.')
		{
			break;
		 } 
	}
	k=j+1;
	int c1=0,c2=-1;
	long  sum1=0;
	float sum2=0;
	for(;j>0;j--)
	{
		sum1+=(a[j-1]-'0')*pow(2,c1);  //pow�Ǹ�������������������һ�����Ķ��ٴ��� 
		c1++;
	}
	for(;k<n;k++)
	{
		sum2+=(a[k]-'0')*pow(2,c2);
		c2--;
	}
	printf("%.2f",sum1+sum2);
	return 0;
 } 
