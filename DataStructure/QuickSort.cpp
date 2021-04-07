#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

void QuickSort(int l, int r, std::vector<int>& arr)
{
	if (l >= r)
		return;
	int left = l;
	int right = r;
	int base = arr[l];
	int temp = 0;

	while (left < right)
	{
		while (arr[right] >= base && left < right)
		{
			right--;
		}
		while (arr[left] <= base && left < right)
		{
			left++;
		}
		if (left < right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
	arr[l] = arr[left];
	arr[left] = base;
	QuickSort(l, left - 1, arr);
	QuickSort(right + 1, r, arr);
}

void QuickSort(std::vector<int> &arr)
{
	QuickSort(0, arr.size()-1, arr);
}

void testQuickSort()
{
	std::vector<int> v = { 6, 1, 2, 7, 9, 3, 4, 5, 10, 8 };
	QuickSort(v);
// 	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		std::cout << (*it) << " ";
// 	}
	for (auto elem : v)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}

