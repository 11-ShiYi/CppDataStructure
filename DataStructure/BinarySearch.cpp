#include <iostream>


//non-recursive
template<typename T>
int BinarySearch(T arr[], int n, T target) //return the index of target
{
	//search in [0...n-1]
	int l = 0, r = n - 1;
	
	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		if (arr[mid] == target)
			return mid;
		if (arr[mid] > target)
		{
			//search in [0, mid-1]
			r = mid - 1;
		}
		else
		{
			//search in [mid+1, n-1]
			l = mid + 1;
		}
	}
	return -1;
}

//implement in recursive
template<typename T>
int BinarySearchRecursive(int left, int right, T arr[], T target)
{
	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (target == arr[mid])
		{
			return mid;
		}
		if (target < arr[mid])
		{
			return BinarySearchRecursive(left, mid - 1, arr, target);
		}
		else
			return BinarySearchRecursive(mid + 1, right, arr, target);
	}return -1;
}
template<typename T>
int BinarySearchRecursive(T arr[], int n, T target)
{
	return BinarySearchRecursive(0, n,arr, target);
}


void testBinarySearch()
{
	int arr[] = { 0,2,3, 4,5,7,9 };
	std::cout << BinarySearchRecursive(arr, 7, 7);
}

int main()
{
	testBinarySearch();
	return 0;
}