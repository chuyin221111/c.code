#include <stdio.h>
int main()
{
  int i=0;
  int arr[]={1,2,3,4,5,6,7,8,9};
  int target =7;
  int sz=sizeof(arr)/sizeof(arr[0]);
  printf("ԭ����Ϊ\n");
  for(i=0;i<sz;i++)
   { 
     
	 printf("%2d",arr[i]); 
	}
	printf("\n");
	printf("ɾ���������\n");
	for(i=0;i<sz;i++)
	{  
	  if (arr[i]=target)
	  {
	    
		}
	   		
	  }
	  printf("%2d",arr[i]);
	}
	return 0;	
}
