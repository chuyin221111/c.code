#include <stdio.h>
int main()
{
	int arr[1000];
	int N,M;
	int count=0,k=0;		//K��ʾ��ǰλ�� 
	printf("����������������Ҫ�ı�ţ�\n");
	scanf("%d%d",&N,&M);	
	 for(int i=1;i<=N;i++)	//��ÿ���˱�ţ�ÿ����λ�ñ�ţ��±꣩��1��ʼ		
	   {	 
	      arr[i]=i;
	   }
	 for(int i=1;i<=N;i++)  //��ʼ��̭ 
	  {
	  	while(count<M)      
	  	{
	  	   k++;
		  if(k>N)       //��K>N(����������KҪ�ص���� 
		  {
		  	k=1;
		  }
		  if(arr[k]!=0)		//arr[K]!=0��ʾ��ǰλ�������˵ģ�Ȼ��count�������� 
		  {
		  	 count++;
		  }	
		   
		}
	     printf("%d",arr[k]);
	     arr[k]=0;
	     count =0;
	  }
	return  0;	   	
		 						
 } 
