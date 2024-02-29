#include<iostream>
#include<ios>
#include<iomanip>

int main(int argc, char **argv)
{
	// print new line character on output stream
/*	std::cout<<"Example of new line character."<<std::endl;
*/
	// flush output buffer to its final destination
/*	std::cout<<"Example of std::flush"<<std::endl<<std::flush;
*/
	// set width - adjust the field for the output about to be printed
	auto fname = "Debrishi";
	auto lname = "Biswas";
/*	std::cout<<std::setw(15)<<"First "<<std::setw(5)<<"Name: "<<std::setw(5)<<fname<<std::endl;
	std::cout<<std::setw(15)<<"Last "<<std::setw(5)<<"Name: "<<std::setw(5)<<lname<<std::endl;
*/
	// justify the output stream
	// justify right (default)
/*	std::cout<<std::right;
	std::cout<<"This is "<<std::setw(15)<<" right justified."<<std::setw(15)<<std::endl;
*/
	//justify left
/*	std::cout<<std::left;
	std::cout<<"This is "<<std::setw(15)<<" left justified."<<std::setw(15)<<std::endl;
*/
	//justify internal - sign will be left justified and data will be right justified (no string)
/*	std::cout<<std::internal;
	std::cout<<std::setfill('.');
	std::cout<<std::setw(15)<<-132.35<<std::endl;
*/
	// fill internal space with character
/*	std::cout<<std::setfill('.');
	std::cout<<std::setw(15)<<"First "<<std::setw(15)<<"Name: "<<std::setw(15)<<fname<<std::endl;
	std::cout<<std::setw(15)<<"Last "<<std::setw(15)<<"Name: "<<std::setw(15)<<lname<<std::endl;
*/
	// boolalpha - convert 1 or 0 into true or false resp.
	// noboolalpha (By default)
	auto op1 = 400;
	auto op2 = 200;
/*	std::cout<<std::boolalpha;
	std::cout<<"Show boolean in alphabet: "<<(op1 > op2)<<std::endl;
	std::cout<<std::noboolalpha;
*/
	// showpos - display positive sign with data
	// noshowpos (By default)
	auto op3 = 365;
/*	std::cout<<std::showpos;
	std::cout<<"Show positive sign: "<<op3<<std::endl;
	std::cout<<std::noshowpos;
*/
	// number system - dec, hex, oct
	// Only work with integer
	auto op4 = -15;
/*	std::cout<<"Decimal (base 10): "<<std::dec<<op4<<std::endl;
	std::cout<<"Octal (base 8): "<<std::oct<<op4<<std::endl;
	std::cout<<"Hexa-decimal (base 16): "<<std::hex<<op4<<std::endl;
*/

	// uppercase and nouppercase
/*	std::cout<<std::uppercase;
	std::cout<<"Decimal (base 10): "<<std::dec<<op4<<std::endl;
	std::cout<<"Octal (base 8): "<<std::oct<<op4<<std::endl;
	std::cout<<"Hexa-decimal (base 16): "<<std::hex<<op4<<std::endl;
	std::cout<<std::nouppercase;
*/
	// scientific format - fractional numbers only
	auto op5 = 3.141592653589793238462643383279502884197;
/*	std::cout<<std::scientific;
	std::cout<<"Scientic Format: "<<op5<<std::endl;
	std::cout.unsetf(std::ios::scientific);	//for diable purpose
*/
	// fixed format (By default) - factional numbers only
/*	std::cout<<std::fixed;
	std::cout<<"Scientic Format: "<<op5<<std::endl;
	std::cout.unsetf(std::ios::fixed); //for disable purpose
*/
	// setprecision() - total no. of digit include factional part
	// By default precision is 6
	// If precision is bigger than support type, then it will return garbage value.
/*	std::cout<<"Result: "<<std::setprecision(10)<<op5<<std::endl;
*/
	// showpoint - show trailing of zero if required
	// noshowpoint (By default)
	auto op6 = 12.00;
/*	std::cout<<std::showpoint;
	std::cout<<"Result: "<<op6<<std::endl;
	std::cout<<std::noshowpoint;
*/
	return 0;
}
