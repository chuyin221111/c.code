#include <stdio.h>
int main ()
{
   	int i,s,t=0;
   	int count=0;
   	printf("请输入一个不多于5位的正整数：\n");
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
        	     printf("输入错误，请重新输入\n");
		       }
		       
		   printf("%d",s);	       
         }
         while(i%10==0)
        {
		}
				
		 
	 printf("一共有%d位数",count);
    }
	
	else
    {
    	printf("输入错误，请重新输入\n");
	}
	return 0;
 } 
