#include<stdio.h>
int main(void) {
// This is example of pointer to array
int arr[] = {1,2,3,4,5,6,7,8,9,11,12,13}, i;
for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
	printf("Address of &arr[%d] = %p\n",i,&arr[i]);
	printf("Address of arr+%d = %p\n",i,arr+i);
	printf("Value of arr[%d] = %d\n",i,arr[i]);
	printf("Value of *arr+%d = %d\n",i,arr+i);
}
return 0;
}
