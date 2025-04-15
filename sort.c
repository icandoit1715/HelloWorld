#include "sort.h"


void insertSort(int *arr, int len)
{
	int i, j;
	int tmp;
	for(i = 1; i < len; ++i)
	{
		tmp = arr[i];
		for(j = i; j >= 1 && arr[j - 1] > tmp; --j)
			arr[j] = arr[j - 1];
		arr[j] = tmp;
	}
	
}