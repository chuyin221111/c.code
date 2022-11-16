#include <stdio.h>
 struct  student
{
	int  grade[5];   //用数组来存储5门课程成绩 
	float ave;        //ave为平均成绩 

};
 int main ()
 {
 	int i;
 	float sum=0;
 	struct  student s;
 	s. ave=0;
    int max=0;
	int min=0;
	printf("input the grade of five course:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s.grade[i]);  //输入成绩 
	 }
	 for(i=0;i<5;i++)
	 {
	 	if(s.grade[i]>s.grade[max])   //比较 
	 	{
	 		max=i;
		 }
		 if(s.grade[i]<s.grade[min])
		 {
		 	min=i;
		 }
		 sum+=s.grade[i];
	 	s.ave=sum/5;     //求平均值 
	 }
	 printf("平均成绩是%.1f,最高分是%d,最低分是%d",s.ave,s.grade[max],s.grade[min]);	 
	 return 0;
}   

