#include <stdio.h>
 void bubble_sort(int arr[],int sz)
{               
	int i=0;     //确定冒泡函数排序的趟数 
	for(i=0;i<=sz-1;i++)
	{
		int flag=1;   //假设这一趟要排序的数据已经有序  
		int j=0;   //每一趟冒泡排序 
		for (j=0;j<=sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
		   		arr[j+1]=tmp;
				flag = 0;   //本趟排序没有完全排序 
			}
		}
		if(flag==1)
		{
			break;
		}
	}
}
int main()
{
   int arr[]={1,9,7,5,12,6,4,3,11};
   int i=0; 
   int sz=sizeof(arr)/sizeof(arr[0]);
   bubble_sort(arr,sz);  //冒泡函数 
   for(i=0;i<=sz;i++)
   {
   	 printf("%4d",arr[i]);
   }
   return 0;
 } 
