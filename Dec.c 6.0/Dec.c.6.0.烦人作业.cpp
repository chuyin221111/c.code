#include <stdio.h>
 void bubble_sort(int arr[],int sz)
{               
 int i=0;     //ȷ��ð�ݺ������������ 
 for(i=0;i<=sz-1;i++)
 {
  int flag=1;   //������һ��Ҫ����������Ѿ�����  
  int j=0;   //ÿһ��ð������ 
  for (j=0;j<=sz-1-i;j++)
  {
   if(arr[j]>arr[j+1])
   {
    int tmp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=tmp;
    flag = 0;   //��������û����ȫ���� 
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
  
   int sz=sizeof(arr)/sizeof(arr[0]);
   bubble_sort(arr,sz);  //ð�ݺ��� 
   int i=0; 
   for(i=1;i<sz;i++)
   {
     printf("%4d",arr[i]);
   }
   return 0;
 } 
