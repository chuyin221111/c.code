#include  <stdio.h>
int  main()
{
  int arr1[3][3]={{1,9,7},{2,3,8},{4,5,6}};
  int i,j,n,num;
  printf("输入的矩阵是：\n");
  for(i=0;i<=2;i++)
  	{
  	  for(j=0;j<=2;j++,n++)
  	  {
  	  if(n%3==0)printf("\n");
	  printf("%4d",arr1[i][j]);
	  }
	printf("\n");
  }
  
  
   for(i=0;i<=2;i++)
   {
   	  for(j=0;j<=i+1;j++)
   	  {
   	  	arr1[i][j]*=2;
		 }
	}
   printf("数乘后的矩阵：\n");
   for(i=0;i<=2;i++)
   {
   	  for(j=0;j<=2;j++)
   	  {
		 printf("%d",arr1[i][j]);
		 }
	  printf("\n");
   }
   return  0;
}
   
   
   
   
   
   
   
    
