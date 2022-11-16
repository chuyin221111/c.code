#include  <stdio.h>
#include  <string.h>
int main()
{
   char str1[20],str2[32],str3[20];
   char* temp;   //中间变量 
   int i,j; 
   printf("请输入3个字符串：\n");  //利用指针数组来存储地址 
   gets(str1);
   gets(str2);
   gets(str3);
   char* p[]={str1,str2,str3};
   for(i=0;i<3;i++)
   {
   	  for(j=2;j>=i;j--)
   	  {
   	  	if(strcmp(p[i],p[j])>0)   //用冒泡法排序地址 
   	  	{
   	  		temp=p[j];
   	  		p[j]=p[i];
   	  		p[i]=temp;
		 }
	   }
    }
    printf("排序后的字符串\n");
    for(i=0;i<3;i++)
    {   
    	printf("%s\n",p[i]);
	}
	return 0;
 } 
