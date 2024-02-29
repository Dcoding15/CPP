#include<iostream>

int main(int argc, char **argv)
{
	// if statement
	// if(condition) { statement; }
	// else statement
	// if(condition) { statement 1; } else { statement 2; }
	// if-else statement
	// if(condition 1) { statement 1; } elseif (condition 2) { statement 2; } ... else { statement 3; }
	
	// Finding voting (whether you are 18 or not)
	int age = 19;
	if( age >= 18 )
	{
		std::cout<<"Eligible for vote . . ."<<std::endl;
	}
	else
	{
		std::cout<<"Not Eligible for vote . . ."<<std::endl;
	}
	
	// Finding grade from student marks
	int marks = 85;
	if(marks > 90 && marks <= 100)
	{
		std::cout<<"A1"<<std::endl;
	}
	else if(marks > 80 && marks <= 90)
	{
		std::cout<<"A2"<<std::endl;
	}
	else if(marks > 70 && marks <= 80)
	{
		std::cout<<"B1"<<std::endl;
	}
	else if(marks > 60 && marks <= 70)
	{
		std::cout<<"B2"<<std::endl;
	}
	else if(marks > 50 && marks <= 60)
	{
		std::cout<<"C1"<<std::endl;
	}
	else if(marks >= 40 && marks <= 50)
	{
		std::cout<<"C2"<<std::endl;
	}
	else if(marks > 0 && marks < 40)
	{
		std::cout<<"D (FAIL)"<<std::endl;
	}


	// switch case
	/*
	 *	switch(value_condition)
	 *	{
	 *		case value1:
	 *					statemet-1
	 *					break;
	 *		case value2:
	 *					statemet-2
	 *					break;
	 *		case value3:
	 *					statemet-3
	 *					break;
	 *				
	 *				.
	 *				.
	 *				.
	 *				.
	 *
	 *		case valueN:
	 *					statemet-N
	 *					break;
	 *		default:
	 *					default statemet
	 *	}
	 * */
	// Note: Last case or default case doesn't contain break keyword.
	int days = 5;
	switch(days)
	{
		case 1:
				std::cout<<"MONDAY"<<std::endl;
				break;
		case 2:
				std::cout<<"TUESDAY"<<std::endl;
				break;
		case 3:
				std::cout<<"WEDNESDAY"<<std::endl;
				break;
		case 4:
				std::cout<<"THURSDAY"<<std::endl;
				break;
		case 5:
				std::cout<<"FRIDAY"<<std::endl;
				break;
		case 6:
				std::cout<<"SATURDAY"<<std::endl;
				break;
		case 7:
				std::cout<<"SUNDAY"<<std::endl;
				break;
		default:
				std::cout<<"please enter number between 0 & 7"<<std::endl;
	}

	// Note: we use break and continue only for swtich and loops

	// Ternary Operator (condition) ? true statement : false statement
	int num1 = 20, num2 = 10;
	std::string num3 = (num1 > num2) ? "YES" : "NO";
	std::cout<<num3<<std::endl;


	// for loop - entry control loop
	/*
	 * 	for(initialise; condition; increment / decrement)
	 * 	{
	 * 		statement;
	 * 	}
	 *
	 * */
	int start = 1, end = 10;
	std::cout<<"number range from "<<start<<" to "<<end<<": ";
	for(int i = start; i <= end; i++)
	{
		std::cout<<i<<" ";
	}
	std::cout<<std::endl;

	// while loop - entry control loop
	/*
	 * while(condition)
	 * {
	 * 		statement;
	 * 		increment / decrement ; (optional)
	 * }
	 *
	 * */
	std::cout<<"number range from "<<start<<" to "<<end<<": ";
	int i = start;
	while(i <= end)
	{
		std::cout<<i++<<" ";
	}
	std::cout<<std::endl;

	// do-while loop - exit control loop
	/*
	 * do
	 * {
	 * 		statement;
	 * 		increment / decrement; (optional)
	 * }while(condition);
	 * */
	std::cout<<"number range from "<<start<<" to "<<end<<": ";
	i = start;
	do
	{
		std::cout<<i++<<" ";
	}while(i <= end);
	std::cout<<std::endl;

	return 0;
}
