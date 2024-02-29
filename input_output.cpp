#include<iostream>
#include<climits>
#include<string>

int main(int argc, char **argv)
{
	// Print Data
	//std::cout<<"Example of standard character output."<<std::endl;

	//Input Data without whitespaces
/*	char msg[SHRT_MAX];
	std::cout<<"Enter message: ";
	std::cin>>msg;
	std::cout<<"Example of standard character input.: "<<msg<<std::endl;
*/

	// Reading Data with whitespaces
	std::string name;
	std::cout<<"Enter your name: ";
	std::getline(std::cin, name);
	std::cout<<name<<std::endl;


	// Print Error
	//std::cerr<<"Example of standard errors."<<std::endl;

	//Print Logs
	//std::clog<<"Example of standard logs."<<std::endl;

	return 0;
}


/*
_________________________________
|	Stream		|	Purpose		|
|---------------|---------------|
|	std::cout	|	Print data	|
|---------------|---------------|
|	std::cin	|	Read data	|
|---------------|---------------|
|	std::cerr	|	Print error	|
|---------------|---------------|
|	std::clog	|	Print logs	|
|_______________|_______________|

*/

