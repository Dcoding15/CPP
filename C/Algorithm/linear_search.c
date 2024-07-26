#include<stdio.h>

/*
 * Linear Search: -
 * =============
 * 	Time complexity: -
 *  	Best Case    -> O(1)
 *  	Average Case -> O(n)
 *  	Worst Case   -> O(n)
 * */

int linear_search(int arr[], int value, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if (arr[i] == value)
			return i;
	}
	return -1;
}

int main()
{
	int size = 10;
	int arr[] = {1,2,3,4,5,6,7,8,9,10}, i;
	for (i = 0; i < size; i++) {
		if (i == linear_search(arr, i+1, size)) {
			printf("Test Passed at value %d\n",i+1);
		}
		else {
			printf("Test Failed at value %d\n",i+1);
		}
	}
	return 0;
}
