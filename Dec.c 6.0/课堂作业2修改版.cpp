#include <stdio.h>
int main ()
{
	int i,r,count=0;
	printf("������һ������\n");
	scanf("%d",&i);   
	while(i>=100000)
	{
		printf("�����������������벻����5λ������������");
		scanf("%d",&i); 
	}
	if(i>0) 
	{
	
		do
		{
		  r=i%10; 
		   printf("%d",r); 
          count++; 
		 } while((i/=10)!=0);
		printf("\n");		 
      	printf("һ����%dλ��\n",count);
      	
	}  		 
	else
	{
		printf("����������������벻����5λ����������"); 
	}

	
	return 0;
}
