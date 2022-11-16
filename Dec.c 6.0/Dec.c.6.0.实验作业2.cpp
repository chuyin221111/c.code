#include <stdio.h>
int main()
{	
	int nums[]={-1,0,3,5,9,12};   //给定一个数组 
	int target;
	printf("请输入所要删除目标值target:\n");    //所要删除的目标值 
	scanf("%d", &target);
	int sz = sizeof(nums) / sizeof(nums[0]);  //计算数组元素个数 
	int left = 0;          //最左边的下标值 
	int right = sz - 1;     //最右边的下标值 
	while (left <= right)
	{
		int mid = (left + right) / 2;  //计算中间元素下标值 
		if (nums[mid] > target)      //比较中间元素与目标值，如果中间元素大于目标值 
		{
			right = mid - 1;      
		}
		else if (nums[mid] < target)     //如果中间下标小于目标值 
		{
			left = mid + 1;       
		}
		else           //如果中间元素=目标值 
		{
			printf("%d出现在nums中并且下标为%d", target, mid);
			break;
		}
	}
	if (left > right)   //找不到 目标值 
	{
		printf("输出：-1\n");
		printf("%d并不在nums数组中", target);

	}

	return 0;

}
