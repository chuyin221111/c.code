#include <stdio.h>
int main()
{	
	int nums[]={-1,0,3,5,9,12};   //����һ������ 
	int target;
	printf("��������Ҫɾ��Ŀ��ֵtarget:\n");    //��Ҫɾ����Ŀ��ֵ 
	scanf("%d", &target);
	int sz = sizeof(nums) / sizeof(nums[0]);  //��������Ԫ�ظ��� 
	int left = 0;          //����ߵ��±�ֵ 
	int right = sz - 1;     //���ұߵ��±�ֵ 
	while (left <= right)
	{
		int mid = (left + right) / 2;  //�����м�Ԫ���±�ֵ 
		if (nums[mid] > target)      //�Ƚ��м�Ԫ����Ŀ��ֵ������м�Ԫ�ش���Ŀ��ֵ 
		{
			right = mid - 1;      
		}
		else if (nums[mid] < target)     //����м��±�С��Ŀ��ֵ 
		{
			left = mid + 1;       
		}
		else           //����м�Ԫ��=Ŀ��ֵ 
		{
			printf("%d������nums�в����±�Ϊ%d", target, mid);
			break;
		}
	}
	if (left > right)   //�Ҳ��� Ŀ��ֵ 
	{
		printf("�����-1\n");
		printf("%d������nums������", target);

	}

	return 0;

}
