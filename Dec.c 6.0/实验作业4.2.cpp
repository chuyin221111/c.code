#include  <stdio.h>
#include  <string.h>
int main()
{
   char str1[20],str2[32],str3[20];
   char* temp;   //�м���� 
   int i,j; 
   printf("������3���ַ�����\n");  //����ָ���������洢��ַ 
   gets(str1);
   gets(str2);
   gets(str3);
   char* p[]={str1,str2,str3};
   for(i=0;i<3;i++)
   {
   	  for(j=2;j>=i;j--)
   	  {
   	  	if(strcmp(p[i],p[j])>0)   //��ð�ݷ������ַ 
   	  	{
   	  		temp=p[j];
   	  		p[j]=p[i];
   	  		p[i]=temp;
		 }
	   }
    }
    printf("�������ַ���\n");
    for(i=0;i<3;i++)
    {   
    	printf("%s\n",p[i]);
	}
	return 0;
 } 
