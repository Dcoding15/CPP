#include<stdio.h>
int main(int argc, char* argv[])
{
	/*
	 * data_type variable_name_1, variable_name_2, ... , variable_name_N; <-- Definition
	 * 
	 * OR
	 *
	 * data_type variable_name			<-- Definition
	 * data_type variable_name = value;	<-- Initialization
	 * */

	/*
	 * Rules for Naming Variables: -
	 * --------------------------
	 * 1. A variable name must only contain alphabets, digits, and underscore.
	 * 2. A variable name must start with an alphabet or an underscore only.
	 * 3. It cannot start with a digit.
	 * 4. No whitespace is allowed within the variable name.
	 * 5. A variable name must not be any reserved word or keyword.
	 * */

	/*
	 * Variable Types: -
	 * --------------
	 *  1. Local Variable: -
	 *  	It is declared inside function or block of code.
	 *  	It scope is limited to block or function.
	 *  2. Global Variable: -
	 *  	It is declared outside function or block of code.
	 *  	It scope is whole program.
	 *  3. Static Variable: -
	 *  	It is defined using static keyword.
	 *  	It's default value is 0.
	 *  	It's scope can be global and local.
	 *  4. Automatic: -
	 *  	It is defined using auto keyword.
	 *  	It's default value is garbage value.
	 *  	All auto variables are local variables by default.
	 *  5. Extern Variable: -
	 *  	It is defined using extern keyword.
	 *  	It is use to share between multiple files.
	 *  	It's scope is global or multiple files.
	 *  6. Register Variable: -
	 *  	It is defined using register keyword.
	 *  	It's default value is grabage value.
	 *  	It's scope is local.
	 *  	These are stored in CPU register instead of RAM.
	 *  7. Constant Variable: -
	 *  	It is defined using const keyword.
	 *  	It can also define using #define preprocessor.
	 *  	It can't be modified once declared.
	 *
	 *  Type							Declaration								Change in Value		Change in Address
	 *  ====							===========								===============		=================
	 *  Pointer to Variable				data_type * variable_name						Yes					Yes
	 *  Pointer to Constant				const data_type * variable_name					No					Yes
	 *  								data_type const * variable_name					No					Yes
	 *  Constant Pointer to Variable	data_type * const variable_name					Yes					No
	 *  Constant Pointer to Pointer		const data_type * const variable_name			No					No
	 *
	 *  Escape sequence: -
	 *  ---------------
	 *  \a  	-> alert character
	 *  \b  	-> backspace
	 *  \f  	-> formfeed
	 *  \n  	-> newline
	 *  \r  	-> carriage return
	 *  \t  	-> horizontal tab
	 *  \v  	-> vertical tab
	 *  \\  	-> backslash
	 *  \?  	-> question mark 
	 *  \' 		-> single quote
	 *  \'' 	-> double quote
	 *  \oXX  	-> octal number
	 *  \xXX  	-> hexadecimal number
	 *  \0		-> NULL
	 *  \e		-> escape sequence
	 *  \s		-> space character
	 *  \d		-> delete character
	 *
	 *
	 *  Literals: -
	 *  --------
	 *  1. Integer Literal
	 *  	(a) Decimal (base 10)			-> From 0 to 9
	 *  	(b) Octal (base 8)				-> From 0 to 7 with 0 as prefix
	 *  	(c) Hexadecimal (base 16)		-> From 0 to 9 and A to F (as 10 to 15 resp.) with 0x or 0X as prefix
	 *  	(d) Binary (base 2)				-> From 0 to 1 with 0b or 0B as prefix
	 *  	(e) Unsigned Integer			-> Integer value with u and U as suffix
	 *  	(f) Long Integer				-> Integer value with l and L as suffix
	 *  	(g) Unsigned Long Integer		-> Integer value with ul and UL as suffix
	 *  	(h) Long Long Integer			-> Integer value with ll and LL as suffix
	 *  	(i) Unsigned Long Long Integer	-> Integer value with ull and ULL as suffix
	 *  2. Float Literal
	 *  	(a) 10.125		<-- Float
	 *  	(b) 1.215e-10	<-- Double
	 *  3. Character Literal
	 *  4. String Literal
	 * */
	return 0;
}
