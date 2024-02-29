#include<iostream>
#include<cmath>
#include<iomanip>

int main(int argc, char **argv)
{
	// Trigonometry, Inverse Trigonometry, Hyperbolic Trigonometry, Inverse Hyperbolic Trigonometry
	auto deg = 45.0;
	auto rad = deg * (M_PI / 180.0);
	auto x_rad = 45 * (M_PI / 180.0), y_rad = 45 * (M_PI / 180.0);
	std::cout<<"sine                       : "<<std::sin(deg)<<std::endl;
	std::cout<<"cosine                     : "<<std::cos(deg)<<std::endl;
	std::cout<<"tangent                    : "<<std::tan(deg)<<std::endl;
	std::cout<<"inverse sine               : "<<std::asin(rad)<<std::endl;
	std::cout<<"inverse cosine             : "<<std::acos(rad)<<std::endl;
	std::cout<<"inverse tangent            : "<<std::atan(rad)<<std::endl;
	std::cout<<"inverse tangent (2 axis)   : "<<std::atan2(x_rad, y_rad)<<std::endl;
	std::cout<<"hyperbolic sine            : "<<std::sinh(deg)<<std::endl;
	std::cout<<"hyperbolic cosine          : "<<std::cosh(deg)<<std::endl;
	std::cout<<"hyperbolic tangent         : "<<std::tanh(deg)<<std::endl;
	std::cout<<"inverse hyperbolic sine    : "<<std::asinh(rad)<<std::endl;
	std::cout<<"inverse hyperbolic cosine  : "<<std::acosh(rad)<<std::endl;
	std::cout<<"inverse hyperbolic tangent : "<<std::atanh(rad)<<std::endl;

	// Exponential and Logarithm
	auto base = 2, expo = 4;
	auto x = 4, y = 3;
	std::cout<<"power                : "<<std::pow(base,expo)<<std::endl;
	std::cout<<"square root          : "<<std::sqrt(base)<<std::endl;
	std::cout<<"cube root            : "<<std::cbrt(base)<<std::endl;
	std::cout<<"hypotenuse	         : "<<std::hypot(x, y)<<std::endl;
	std::cout<<"euler's number (e^x) : "<<std::exp(expo)<<std::endl;
	std::cout<<"2^x                  : "<<std::exp2(expo)<<std::endl;
	std::cout<<"e^x - 1              : "<<std::expm1(expo)<<std::endl;
	std::cout<<"log n (base e)       : "<<std::log(base)<<std::endl;
	std::cout<<"log n (base 10)      : "<<std::log10(base)<<std::endl;
	std::cout<<"log n (base 2)       : "<<std::log2(base)<<std::endl;
	std::cout<<"log (n+1) (base e)   : "<<std::log1p(base)<<std::endl;

	//Note: C++17 hypot(x, y, z);

	// Algebric
	double num1 = -100, num2 = 56.55;
	std::cout<<"absolute value in integer : "<<std::abs(num1)<<std::endl;
	std::cout<<"absolute value in fraction: "<<std::fabs(num1)<<std::endl;
	std::cout<<"remainder value in fraction          :  "<<std::fmod(num1, num2)<<std::endl;
	std::cout<<"signed remainder value in fraction   : "<<std::remainder(num1, num2)<<std::endl;
	std::cout<<"larger floating value in fraction    : "<<std::fmax(num1, num2)<<std::endl;
	std::cout<<"smaller floating value in fraction   : "<<std::fmin(num1, num2)<<std::endl;
	std::cout<<"positive difference value in fraction: "<<std::fdim(num1, num2)<<std::endl;
	std::cout<<"nearest integer not lesser than given value: "<<std::ceil(num1)<<std::endl;
	std::cout<<"nearest integer not greater than give value: "<<std::floor(num1)<<std::endl;
	std::cout<<"nearest integer value                      : "<<std::round(num1)<<std::endl;

	return 0;
}
