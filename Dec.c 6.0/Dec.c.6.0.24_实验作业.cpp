#include <stdio.h>
int main ()
{  
     
  int nums[]={-1,0,3,5,9,12};
  int target;
  printf("请输入目标值target:\n");
  scanf("%d",&target);
  int sz=sizeof(nums)/sizeof(nums[0]);
  int left=0;
  int right=sz-1;
  while(left<=right)
  { 
    int mid=(left+right)/2;
    if(nums[mid]>target)
    {  
      right=mid-1;
    }
	 else if(nums[mid]<target)
	 {
	 	left=mid+1;
	 }
	 else
	 {
	 	printf("%d出现在nums中并且下标为%d",target,mid);
	 	break;
	 }
  }
	 if(left>right)
	 {
          printf("-1\n");
		  printf("%d并不在nums数组中",target); 
    
	 }
	
    return 0;
		
 } 
