#include<iostream>

int main(int argc, char **argv)
{
	/*

	Basic Operation: -
	---------------

	add		-->	[ operand 1 ] + [ operand 2 ]
	sub		--> [ operand 1 ] - [ operand 2 ]
	mul		--> [ operand 1 ] * [ operand 2 ]
	div		--> [ operand 1 ] / [ operand 2 ]
	mod		--> [ operand 1 ] % [ operand 2 ]

	*/

	auto num1 = 20;
	auto num2 = 10;

	std::cout<<"Result: "<<num1+num2<<std::endl;

	/*

	Pre-Increment and Pre-Decrement: -
	-------------------------------

	++a		--> first get increment by 1 then assign value
	--a		--> first get decrement by 1 then assign value

	Post-Increment and Post-Decrement: -
	---------------------------------

	a++		--> first assign value then increment by 1
	a--		--> first assign value then decrement by 1

	*/

	auto num3 = 50;
	auto num4 = num3++;
	auto num5 = num3;

	std::cout<<"Result (Before): "<<num4--<<std::endl;
	std::cout<<"Result (After): "<<num5<<std::endl;

	/*

	Compound Assignment: -
	-------------------

	+=		--> [ operand 1 ] += [ operand 2 ]
	-=		--> [ operand 1 ] -= [ operand 2 ]
	*=		--> [ operand 1 ] *= [ operand 2 ]
	/=		--> [ operand 1 ] /= [ operand 2 ]
	%=		--> [ operand 1 ] %= [ operand 2 ]

	&=		--> [ operand 1 ] &= [ operand 2 ]
	|=		--> [ operand 1 ] |= [ operand 2 ]
	^=		--> [ operand 1 ] ^= [ operand 2 ]
	<<=		--> [ operand 1 ] <<= [ operand 2 ]
	>>=		--> [ operand 1 ] >>= [ operand 2 ]

	Note: After operation the value is assigned to operand 1

	*/

	auto num6 = 8;
	auto num7 = 1;

	num6 += num7;
	std::cout<<"Result:  "<<num6<<std::endl;
	
	std::cout<<"Bitwise NOT: "<<~num6<<std::endl;

	/*

	Relational Operation: -
	--------------------

	<		--> [ operand 1 ] < [ operand 2 ]
	>		--> [ operand 1 ] > [ operand 2 ]
	<=		--> [ operand 1 ] >= [ operand 2 ]
	>=		--> [ operand 1 ] <= [ operand 2 ]
	==		--> [ operand 1 ] == [ operand 2 ]
	!=		--> [ operand 1 ] != [ operand 2 ]

	*/

	auto num8 = 15;
	auto num9 = 10;

	std::cout<<std::boolalpha;	// Make bool to display true/false instead of 1/0
	std::cout<<"Result: "<<(num8 != num9)<<std::endl;

	/*

	Logical Operation: -
	-----------------

	&&		--> [ operand 1 ] && [ operand 2 ]
	||		--> [ operand 1 ] || [ operand 2 ]
	!		--> ![ operand 1 ]

	*/

	bool num10 = true;
	bool num11 = false;

	std::cout<<std::boolalpha;
	std::cout<<"Logical AND: "<<(num10 && num11)<<std::endl;
	std::cout<<"Logical OR: "<<(num10 || num11)<<std::endl;
	std::cout<<"Logical NOT: "<<(!num10)<<std::endl;

	return 0;
}

/*

Precedence: which operation do first
Associativity: which order will it follow

-----------------------------------------------------------------------------------
Order	Operator						Description 					Direction
-----------------------------------------------------------------------------------
1.		::								Scope resolution					-->
-----------------------------------------------------------------------------------
2.		a++  a--						Post increment & decrement			-->
		type()  type{}					Functional cast
		a()								Functional call
		a[]								Subscript
		.  ->							Member access
-----------------------------------------------------------------------------------
3.		++a  --a						Pre increment & decrement			<--
		+a  -a							Urarny plus & minus
		!  ~							Logical & Bitwise NOT
		(type)							C style cast
		*a								Indirection
		&a								Address of
		sizeof()						Display size of data type
		co_await						await expression
		new  new[]						Dynamic memory allocation
		delete  delete[]				Dynamic memory deallocation
-----------------------------------------------------------------------------------
4.		.*  ->*							Pointer to member					-->
-----------------------------------------------------------------------------------
5.		*  /  %							MUL, DIV, MOD						-->
-----------------------------------------------------------------------------------
6.		+  -							ADD, SUB							-->
-----------------------------------------------------------------------------------
7.		<<  >>							Bitwise Left & Right Shift			-->
-----------------------------------------------------------------------------------
8.		<=>								Three way comparison				-->
-----------------------------------------------------------------------------------
9.		<  <=  >  >=					Relational Operator					-->
-----------------------------------------------------------------------------------
10.		==  !=							Equality Operator					-->
-----------------------------------------------------------------------------------
11.		&								Bitwise AND							-->
-----------------------------------------------------------------------------------
12.		^								Bitwise XOR							-->
-----------------------------------------------------------------------------------
13.		|								Bitwise OR							-->
-----------------------------------------------------------------------------------
14.		&&								Logical AND							-->
-----------------------------------------------------------------------------------
15.		||								Logical OR							-->
-----------------------------------------------------------------------------------
16.		?:								Ternary Operator					<--
		throw							throw Operator
		co_yield						yield Expression
		=								Direct assignment operator
		+=  -=							Compound assignment operator
		*=  /=  %=						Compound assignment operator
		<<=  >>=						Compound assignment operator
		&=  ^=  |=						Compound assignment operator
-----------------------------------------------------------------------------------
17.		,								Comma								-->
-----------------------------------------------------------------------------------
*/
