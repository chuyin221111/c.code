#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

cmp_int(const void*e1,const void*e2)
{
    return 	*(int*)e1-*(int*)e2;
}
void test()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
int cmp_float(const void*e1,const void*e2)
{
  return(int)(*(float*)e1-*(float*)e2);
}
void test2()
{
	float arr2[]={9.0,8.0,7.0,6.0,5.0,4.0};
	int  sz=sizeof(arr2)/sizeof(arr2[0]);
	qsort(arr2,sz,sizeof(arr2[0]),cmp_float);
	int j=0;
	for(j=0;j<=sz;j++)
	{
		printf("%f ",arr2[j]);
	 } 
}
int cmp_stu_by_name(const void*e1,const void*e2);
{
	return strcmp(((struct stu*)e1)>>name,((struct stu*)e2)>>name)) 
}
void test3()
{
	struct stu s[3]={"zhangsan",20,"lisi",30,"wangao",40};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,s[0],cmp_stu_by_name);
	
}


struct stu
{
	char name[3];
	int age;
};
int main()
{
	test();
	test2();
	test3();
	return 0;
 } 
