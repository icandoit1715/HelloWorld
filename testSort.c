#include <iostream>
#include "sort.h"

using namespace std;
//dongubun测试的实现
int main()
{
	int arr[] = {1, 9, 10, 5, 2, 20,  3, 5, 52, 35, 94};
	cout << "before sort: ";
	for(const auto &item : arr)
					cout << item << " ";
	insertSort(arr, sizeof(arr) / sizeof(int));
	cout << endl;
	cout << "after sort: ";
	for(const auto &item : arr)
					cout << item << " ";
	cout << endl;

	return 0;
}
