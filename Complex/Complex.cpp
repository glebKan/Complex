#include "Complex.h"

Complex Complex::sum(Complex cmp1)
{
	Complex sum{ cmp1.im + this->im, cmp1.re + this->re };
	return sum;
}

Complex Complex::raz(Complex cmp1)
{
	Complex raz{ this->im - cmp1.im, this->re - cmp1.re };
	return raz;
}
Complex Complex::pr(Complex cmp1)
{
	Complex pr{(cmp1.im*this->im)-(cmp1.re*this->re),(cmp1.im*this->re)+(this->im*cmp1.re)};
	return pr;
}
Complex Complex::del(Complex cmp1)
{
	Complex del{ ((cmp1.im * this->im) + (cmp1.re * this->re)) / ((cmp1.im * cmp1.im) + (cmp1.re * cmp1.re)),(((this->re * cmp1.im) - (this->im * cmp1.re)) / ((cmp1.im * cmp1.im) + (cmp1.re * cmp1.re))) };
	return del;
}
void Complex::print(Complex n1) {
	string sign = (n1.re >= 0) ? "+" : "";
	cout << n1.im << sign << n1.re<<'i';
}