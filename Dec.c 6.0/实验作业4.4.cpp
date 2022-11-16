#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 
int main()
{
   char s[1000];
   int a[1000];
   getchar();
   gets(s);
   int i,j,t=0,sum=0,h=0;
   //printf("ÇëÊäÈë×Ö·û´®£º\n");
   j=strlen(s); 
   for(i=0;i<j;i++)
   {
   	  if(s[i]>='0'&&s[i]<='9')
   	  {
   	  	sum=sum*10+(s[i]-'0');
   	  	if(s[i+1]<'0'||s[i+1]>'9')
   	  	{
   	  		a[h]=sum;
   	  		h++;
   	  		sum=0;
		 }
	   }
    }
	printf("%d\n",h);
	for(i=0;i<h;i++)
	{
		printf("%d\n",a[i]);
		return 0;
	}	
 } 
