#include <stdio.h>
int main()
{
	char str1[5],str2[6],str3[20];
	int i,j,k;
	for(i=0;i<5;i++)
	{
		scanf("%c",str1);
		str3[i]=str1[i];
	}
	for(j=0;j<6;j++)
	{
		scanf("%c",str2);
		str3[j]=str2[j];
	}
	for(k=0;k<20;k++)
	{
	   printf("%c",str3);
		
	}
	
	
	return 0;
 } 
