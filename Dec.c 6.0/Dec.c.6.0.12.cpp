#include <stdio.h>
int main()
{
  int arr1[3][3]={{1,9,7},{2,3,8},{4,5,6}};
  int arr2[3][3]={0};
  int i,j;
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
	  {
	  	arr2[i][j]=arr1[i][j];
	   } 
  }
  printf("原矩阵为：\n");
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
	  {
	  	printf("%4d",arr1[i][j]);
       }
	 printf("\n");
  }
  printf("矩阵的转置：\n");
   for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
	  {
	  	printf("%4d",arr2[j][i]);
       }
	 printf("\n");
  }
  return 0;
}
  
