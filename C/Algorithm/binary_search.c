#include<stdio.h>

/*
 * Binary Search: -
 * =============
 * 	Time complexity: -
 * 		Best Case    -> O(1)
 * 		Average Case -> O(log n)
 * 		Worst Case   -> O(log n)
 * */

// -1 means value not found

// Recursive Method
int binary_search_recursive(int arr[], int value, int low, int high) {
	if (low > high) {
		return -1;
	}
	int mid = (low + high) / 2;
	if (value == arr[mid]) {
		return mid;
	}
	if (value < arr[mid]) {
		return binary_search_recursive(arr, value, low, mid-1);
	}
	if (value > arr[mid]) {
		return binary_search_recursive(arr, value, mid+1, high);
	}
}

// Iterative Method
int binary_search_iterative(int arr[], int value, int size) {
	int low = 0, high = size-1;
	int mid = -1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (value == arr[mid]) {
			return mid;
		}
		if (value < arr[mid]) {
			high = mid-1;
		}
		if (value > arr[mid]) {
			low = mid+1;
		}
	}
	return -1;
}

int main(void) {
	int size = 10;
	int arr[] = {1,2,3,4,5,6,7,8,9,10}, i;
	printf("Binary Search Iterative Method: -\n");
	for (i = 0; i < size; i++) {
		if ( i == binary_search_iterative(arr, i+1, size)) {
			printf("Test Passed at value %d\n",i+1);
		}
		else {
			printf("Test Failed at value %d\n",i+1);
		}
	}
	printf("Binary Search Recursive Method: -\n");
	for ( i = 0; i < size; i++) {
		if ( i == binary_search_recursive(arr, i+1, 0, size-1)) {
			printf("Test Passed at value %d\n",i+1);
		}
		else {
			printf("Test Failed at value %d\n",i+1);
		}
	}
	return 0;
}
