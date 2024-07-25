#include<stdio.h>

/*
 * Linear Search: -
 * =============
 * 	Time complexity: -
 *  	Best Case    -> O(1)
 *  	Average Case -> O(n)
 *  	Worst Case   -> O(n)
 * */

int linearSearch(int arr[], int len,int value)
{
	int i;
	for(i = 0; i < len; i++)
	{
		if (arr[i] == value)
			return i+1;
	}
	return -1;
}

int main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	int arr[size], i;
	for(i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Position: %d\n",linearSearch(arr, size,4));
}
