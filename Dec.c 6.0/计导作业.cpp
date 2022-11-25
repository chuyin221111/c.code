#include <stdio.h>
int main()
{
	int arr[4][4]={{1,1,0,1},{0,1,0,1},{0,0,1,1},{1,0,0,0}};
	int i,j,k,ret,sum=0;
	int result[4][4];
	printf("原方阵：\n"); 
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%d ",arr[i][j]);	
	    }
	    printf("\n");
    }
    printf("平方后：\n");
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	{   
    	   for(k=0;k<4;k++)
    	  { 
		    ret=arr[i][k]*arr[k][j];
		    sum=sum+ret;
		   }
		   result[i][j]=sum;
		   printf("%d ",result[i][j]);
		   sum=0;	
	    }
	    
	    printf("\n");
	}  
    return 0;
 } 
