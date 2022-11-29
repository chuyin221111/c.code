#include <stdio.h>
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
};
struct student stu[3]={{10101,"LI lin",'M',18},{10102,"zhang fang",'M',19},{10104,"wang min",'f',20}};
int main()
{
	struct student *p;
	printf("NO. Name           sex age\n");
	for(p=stu;p<stu+3;p++)
	{
		printf("%5d %-20s %2c %4d\n",p->num,p->name,p->sex,p->age);
	}
	return 0;
 } 
