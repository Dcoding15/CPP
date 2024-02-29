#include<iostream>

int main(int argc, char ** argv)
{
	// To find size of an array
	int arr1[] = {1,2,3,4,5};
	std::cout<<"size of array: "<<std::size(arr1)<<std::endl; // print size of array
	std::cout<<"size of array element: "<<sizeof(arr1[0])<<std::endl; // print size of array elements
	
	// 1st way of printing array element ( entry or exit loop )
	std::cout<<"Using for loop: ";
	for(int i = 0; i < std::size(arr1); i++)
	{
		std::cout<<arr1[i]<<" ";
	}
	std::cout<<std::endl;

	std::cout<<"Using while loop: ";
	int i = 0;
	while(i < std::size(arr1))
	{
		std::cout<<arr1[i]<<" ";
		i++;
	}
	std::cout<<std::endl;

	std::cout<<"Using do-while loop: ";
	i = 0;
	do
	{
		std::cout<<arr1[i]<<" ";
		i++;
	}while(i < std::size(arr1));
	std::cout<<std::endl;

	// 2nd way of printing array elements ( for each loop )
	std::cout<<"Using for each loop: ";
	for (auto i : arr1)
	{
		std::cout<<i<<" ";
	}
	std::cout<<std::endl;

	// Note: a proper character of array (string) has \0 which is a null character at the end.
	return 0;
}
