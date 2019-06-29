#include <iostream>
#include "Complex.h"

int main(){
	int real1, real2, img1, img2;
	
	std::cout << "Enter real number for first complex number: ";
	std::cin >> real1;
	std::cout << "\nEnter imaginary number for first complex number: ";
	std::cin >> img1;
	
	angel_complex::Complex c1(real1, img1);
	std::cout << "\nFirst complex number is: ";
	c1.print();
	
	std::cout << "\nEnter real number for second complex number: ";
	std::cin >> real2;
	std::cout << "\nEnter imaginary number for second complex number: ";
	std::cin >> img2;
	
	angel_complex::Complex c2(real2, img2);
	std::cout << "\nSecond complex number is: ";
	c2.print();
	
	std::cout << "\nThe first complex number shifted with no arguments passed is: ";
	c1.shift();
	c1.print();
	
	std::cout << "\nThe first complex number shifted with the first argument (5) passed is: ";
	c1.shift(5);
	c1.print();
	
	std::cout << "\nThe first complex number shifted with both arguments (-2,3) passed is: ";
	c1.shift(-2, 3);
	c1.print();
	
	if(complex_equal(c1, c2))
		std::cout << "\nThese complex numbers are equal!" << std::endl;
		else
			std::cout << "\nThese complex numbers are not equal!" << std::endl;
	
	
	angel_complex::Complex c3 = angel_complex::complex_add(c1, c2);
	std::cout << "\nFirst complex plus second complex is: ";
	c3.print();
	
	angel_complex::Complex c4 = complex_sub(c1, c2);
	std::cout << "\nFirst complex minus second complex is: ";
	c4.print();
	
	return 0;
	
}


