#include <stdio.h>
 struct  student
{
	int  grade[5];   //���������洢5�ſγ̳ɼ� 
	float ave;        //aveΪƽ���ɼ� 

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
		scanf("%d",&s.grade[i]);  //����ɼ� 
	 }
	 for(i=0;i<5;i++)
	 {
	 	if(s.grade[i]>s.grade[max])   //�Ƚ� 
	 	{
	 		max=i;
		 }
		 if(s.grade[i]<s.grade[min])
		 {
		 	min=i;
		 }
		 sum+=s.grade[i];
	 	s.ave=sum/5;     //��ƽ��ֵ 
	 }
	 printf("ƽ���ɼ���%.1f,��߷���%d,��ͷ���%d",s.ave,s.grade[max],s.grade[min]);	 
	 return 0;
}   

