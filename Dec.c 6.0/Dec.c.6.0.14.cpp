#include <stdio.h>
#include <stdlib.h>
 void fun (int arr1[][3],int n)
 {
 	int i=0,j=0;
   for(i=0;i<3;i++)
   	{  
   	  for( j=0;j<=i;j++)
   	  {
		arr1[i][j]=arr1[i][j]*n ;
		 }
	}
 }
int  main()
{
  int arr1[3][3]={{1,9,7},{2,3,8},{4,5,6}};
  int  n;
  int i=0,j=0;
  
  printf("ԭ����Ϊ��\n");
    for ( i=0;i<3;i++)
    {  
      for( j=0;j<3;j++)
      {  
        printf("%d\t",arr1[i][j]);
	  }
	  printf("\n");
	}
	printf("������һ��������\n");
	scanf ("%d",&n);
	fun(arr1 , n);
	printf("��������飺\n");
	for( i=0;i<3;i++)
	{
	  for( j=0;j<3;j++)
	  {  
	    printf("%d\t",arr1[i][j]); 
		  }	
	 printf("\n");
	}
  return 0;
  int arr2[3][3]={0};  
    for(i=0;i<3;i++)
    {
  	for(j=0;j<3;j++)
	  {
	  	arr2[i][j]=arr1[i][j];
	   } 
    }
  printf("�����ת�ã�\n");
   for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
	  {
	  	printf("%4d",arr2[j][i]);
       }
	 printf("\n");
  }	
  return  1;
}

