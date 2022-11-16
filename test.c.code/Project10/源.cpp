#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 1;
	for (i = 1; i <= sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j <= sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,9,7,5,12,6,4,3,11 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i <= sz; i++)
	{
		printf("%4d", arr[i]);
	}
	return 0;
}