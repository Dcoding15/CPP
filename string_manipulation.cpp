#include<iostream>
#include<cctype>
#include<cstring>
int main(int argc, char ** argv)
{
	// Character Manipulation
	// If check is true then it will return non-zero status, but if false then it will return zero status.
	// Check whether a character is alphanumeric
	std::cout<<"Alphanumeric Character: "<<std::isalnum('A')<<std::endl;
	// Check whether a character is alphabetic
	std::cout<<"Alphabetic Character: "<<std::isalpha('a')<<std::endl;
	// Check whether a character is lowercase
	std::cout<<"Lower case Character : "<<std::islower('a')<<std::endl;
	// Check whether a character is uppercase
	std::cout<<"Upper case Character: "<<std::isupper('A')<<std::endl;
	// Check whether a character is digit
	std::cout<<"Decimal Character: "<<std::isdigit('1')<<std::endl;
	// Check whether a character is hexa-decimal
	std::cout<<"Hexadecimal Character: "<<std::isxdigit('f')<<std::endl;
	// Check whether a character is control character
	//std::cout<<"Control Character: "<<std::iscntrl()<<std::endl;
	// Check whether a character is gaphical character
	//std::cout<<"Graphical Character: "<<std::isgraph()<<std:endl;
	// Check whether a character is space character
	//std::cout<<"Space Character: "<<std::isspace()<<std::endl;
	// Check whether a character is blank character
	//std::cout<<"Blank Character: "<<std::isblank()<<std::endl;
	// Check whether a character is printing character
	//std::cout<<"Printable Character: "<<std::isprint()<<std::endl;
	// Check whether a character is punctuation character
	std::cout<<"Punctuation Character: "<<std::ispunct(',')<<std::endl;
	// Convert a character to lowercase
	std::cout<<"Convert to lowercase: "<<(char)std::tolower('H')<<std::endl;
	// Convert a character to uppercase
	std::cout<<"Convert to uppercase: "<<(char)std::toupper('h')<<std::endl;

	// String Manipulation
	const char* str1 = "This is 1st string";
	const char* str2 = "This is 2nd string";
	
	// Length of string
	std::cout<<"Length of string: "<<std::strlen(str1)<<std::endl;

	// String comparison - lexicolographical order / dictionary order
	// 0 if both string is equal
	// 1 if str1 comes before str2
	// -1 if str1 comes after str2
	std::cout<<"String comparison: "<<std::strcmp(str1,str2)<<std::endl;

	// First occurance of character
	char cr = 'i';
	std::cout<<"Find first occurance of character "<<cr<<": "<<std::strchr(str1, cr)<<std::endl; 

	// Last occurance of character
	char lcr = 'n';
	std::cout<<"Find last occurance of character "<<lcr<<": "<<std::strrchr(str2, lcr)<<std::endl;

	const char * var3 = "This is 3rd string";
	char var4[] = "This is 4th string";

	// String copy
	std::cout<<"Copied string: "<<std::strcpy(var4, var3)<<std::endl;

	// String concatenation
	char var5[] = "This is 5th string";
	std::cout<<"Concatenation string: "<<std::strcat(var5, var3)<<std::endl;

	// Syntax for raw array string: const char * [ variable name ] = [ value in string];
	// Syntax for std::string     : str::string [ variable name ] = [ value in string ];
	// Syntax for array string    : char [ variable name ] = [ value in string ]; 
	return 0;
}
