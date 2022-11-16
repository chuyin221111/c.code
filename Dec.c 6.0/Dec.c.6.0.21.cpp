#include <stdio.h>
int main()
{
	int arr[1000];
	int N,M;
	int count=0,k=0;		//K表示当前位置 
	printf("请输入总人数和需要的编号：\n");
	scanf("%d%d",&N,&M);	
	 for(int i=1;i<=N;i++)	//给每个人编号，每个人位置编号（下标）从1开始		
	   {	 
	      arr[i]=i;
	   }
	 for(int i=1;i<=N;i++)  //开始淘汰 
	  {
	  	while(count<M)      
	  	{
	  	   k++;
		  if(k>N)       //当K>N(总人数），K要回到起点 
		  {
		  	k=1;
		  }
		  if(arr[k]!=0)		//arr[K]!=0表示当前位置是有人的，然后count继续计数 
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
