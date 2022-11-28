#include <stdio.h>
 struct student
 {
 	long num;
 	char name[20];
 	float score;
 }; 
int main()
{
	struct student stu[3]={{10101,"zhang",78},{10103,"wang",98.5},{10106,"li",86}};
	struct student temp;
	const int n=3;
	int i,j,k;
	printf("The order is:\n");
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(stu[j].score>stu[k].score)
             {
             	k=j;
			 }
		}
		temp=stu[k];stu[k]=stu[i];stu[i]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%6d  %8s  %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
	}
	printf("\n");
	return 0;
}

   
 
