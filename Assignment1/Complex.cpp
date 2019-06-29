#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(int r, int i){
	real = r;
	imaginary = i;	
}

int Complex::getImaginary() const{
	return imaginary;	
}

int Complex::getReal() const{
	return real;	
}

void Complex::print() const{
	if(imaginary == 0)
		cout << real << endl;
	else
		if(real == 0)
			cout << imaginary << "i" << endl;
	else	
		if(imaginary > 0)
			cout << real << "+" << imaginary << "i" << endl;
	else
		cout << real << imaginary << "i" << endl;
}

Complex complex_add(const Complex & comp1, const Complex & comp2){
	int real, imaginary;
	real = comp1.getReal() + comp2.getReal();
	imaginary = comp1.getImaginary() + comp2.getImaginary();
	Complex c(real, imaginary);
	return c;
}

Complex complex_sub(const Complex & comp1, const Complex & comp2){
	int real, imaginary;
	real = comp1.getReal() - comp2.getReal();
	imaginary = comp1.getImaginary() - comp2.getImaginary();
	Complex c(real, imaginary);
	return c;
}

bool complex_equal(const Complex & comp1, const Complex & comp2){
	return (comp1.getReal() == comp2.getReal()) && (comp1.getImaginary() == comp2.getImaginary());
}
