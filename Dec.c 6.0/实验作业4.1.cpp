#include <stdio.h>
int main ()
{
	void sort(int x[],int n);   //����sort���� 
	int i,* p,a[10];
	p=a;  //ָ�����pָ��a[0] 
	printf("������10��������\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",p++);
	}
	p=a;  //����ָ��a[0] 
	sort(p,10);
	for(p=a,i=0;i<10;i++)
	{
		printf("%5d",*p);  //���������10������Ԫ�� 
		p++;
	 }
	 printf("\n");
	 return 0;	 
 } 
 void sort(int x[],int n)  //����sort������x���β������� 
{
  int i,j,k,t;
  for(i=0;i<n-1;i++)
   {
   	  k=i;
   	  for(j=i+1;j<n;j++)  //������Ԫ�ؽ��бȽ� 
   	  {
   	  	if(x[j]>x[k])   //�жϳ�С��Ԫ���±� 
   	  	{
   	  		k=j;     //��ȡ���ֵ�±� 
		 }
	   }
		if(k!=i)    //�ж��Ƿ�Ϊԭ�����±� �����Ǿ����� 
		{
			t=x[i];       //����Ԫ�� 
			x[i]=x[k];
			x[k]=t;
		}
	  
	}	
}












