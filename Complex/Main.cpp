#include <iostream>
#include "Complex.h"

int main()
{
	Complex a{ 4, 62 };
	Complex b{ 2, 7 };
	//Complex c{ 9, 4 };
	Complex::print(a.del(b));
}