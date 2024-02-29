#include<iostream>
#include<limits>
#include<iomanip>

int main(int argc, char **argv)
{
	// std::numeric_limits<[ data type ]>::min();
	// std::numeric_limits<[ data type ]>::max();
	// std::numeric_limits<[ data type ]>::lowest();
	// std::numeric_limits<[floating point data type]>::epsilon();
	// std::numeric_limits<[floating point data type]>::round_error();
	// std::numeric_limits<[floating point data type]>::infinity();
	// std::numeric_limits<[floating point data type]>::quite_NaN();
	// std::numeric_limits<[floating point data type]>::signaling_NaN();
	// std::numeric_limits<[floating point data type]>::denorm_NaN();
	
	//For any data type
	std::cout<<"Minimum Limits   : "<<std::setw(20)<<std::numeric_limits<int>::min()<<std::endl;
	std::cout<<"Maximum Limits   : "<<std::setw(20)<<std::numeric_limits<int>::max()<<std::endl;
	std::cout<<"Lowest  Limits   : "<<std::setw(20)<<std::numeric_limits<int>::lowest()<<std::endl;
	
	//For floating point data type only
	std::cout<<"Epsilon          : "<<std::setw(20)<<std::numeric_limits<double>::epsilon()<<std::endl;
	std::cout<<"Round Error      : "<<std::setw(20)<<std::numeric_limits<double>::round_error()<<std::endl;
	std::cout<<"Infinity         : "<<std::setw(20)<<std::numeric_limits<double>::infinity()<<std::endl;
	//std::cout<<"Quite NaN      : "<<std::setw(20)<<std::numeric_limits<auto>::quite_NaN()<<std::endl;
	//std::cout<<"Signal NaN     : "<<std::setw(20)<<std::numeric_limits<auto>::signaling_NaN()<<std::endl;
	std::cout<<"Denorm Minimum   : "<<std::setw(20)<<std::numeric_limits<double>::denorm_min()<<std::endl;
		
	return 0;
}
