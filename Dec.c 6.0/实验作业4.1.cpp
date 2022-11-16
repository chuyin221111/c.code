#include <stdio.h>
int main ()
{
	void sort(int x[],int n);   //声明sort函数 
	int i,* p,a[10];
	p=a;  //指针变量p指向a[0] 
	printf("请输入10个整数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",p++);
	}
	p=a;  //重新指向a[0] 
	sort(p,10);
	for(p=a,i=0;i<10;i++)
	{
		printf("%5d",*p);  //输出排序后的10个数组元素 
		p++;
	 }
	 printf("\n");
	 return 0;	 
 } 
 void sort(int x[],int n)  //定义sort函数，x是形参数组名 
{
  int i,j,k,t;
  for(i=0;i<n-1;i++)
   {
   	  k=i;
   	  for(j=i+1;j<n;j++)  //各数组元素进行比较 
   	  {
   	  	if(x[j]>x[k])   //判断出小的元素下标 
   	  	{
   	  		k=j;     //获取大的值下标 
		 }
	   }
		if(k!=i)    //判断是否为原来的下标 ，不是就运行 
		{
			t=x[i];       //交换元素 
			x[i]=x[k];
			x[k]=t;
		}
	  
	}	
}












