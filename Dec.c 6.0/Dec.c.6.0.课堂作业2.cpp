#include <stdio.h>
int main ()
{
   	int i,s,t=0;
   	int count=0;
   	printf("������һ��������5λ����������\n");
   	scanf("%d",&i);
   	if(i>=0)
	{
   	   while(i%10!=0)
       	{      
   		   i=i/10;
   		   count++;
   		   s=i%10;
	        if(count>5)
              {
        	     printf("�����������������\n");
		       }
		       
		   printf("%d",s);	       
         }
         while(i%10==0)
        {
		}
				
		 
	 printf("һ����%dλ��",count);
    }
	
	else
    {
    	printf("�����������������\n");
	}
	return 0;
 } 
