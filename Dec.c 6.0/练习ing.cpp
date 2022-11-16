#include <stdio.h>
int main()
{
	int a=0;
	while((a>=0)&&(a<=100))
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
		a++;
	}
	return 0;
 } 
