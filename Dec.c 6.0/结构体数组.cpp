#include <stdio.h>
#include <string.h>
struct person
{
	char name[20]; 
	int count;
}leader [3]={"li",0,"zhan",0,"sun",0};
int main()
{  
   char leader_name[20];
   int i,j;
   for(i=0;i<10;i++)
   {
   	scanf("%s",&leader_name);
   	for(j=0;j<3;j++)
   	{
   		if(strcmp(leader_name,leader[j].name)==0)leader[j].count++;
	   }
   }
   printf("½á¹ûÎª£º\n");
   for(i=0;i<3;i++)
   {
   	printf("%s %d ",leader[i].name,leader[i].count);
   }
  return 0;
	
 } 
