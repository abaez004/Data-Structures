#include <iostream>
#include "Complex.h"
using namespace std;

void print_complex(int real, int img);

int main(){
	int real1, real2, img1, img2;
	
	cout << "Enter real number for first complex number: ";
	cin >> real1;
	cout << "Enter imaginary number for first complex number: ";
	cin >> img1;
	
	Complex c1(real1, img1);
	cout << "First complex number is: ";
	c1.print();
	
	cout << "Enter real number for second complex number: ";
	cin >> real2;
	cout << "Enter imaginary number for second complex number: ";
	cin >> img2;
	
	Complex c2(real2, img2);
	cout << "Second complex number is: ";
	c2.print();
	
	cout << endl;
	if(complex_equal(c1, c2))
		cout << "These complex numbers are equal!" << endl;
		else
			cout << "These complex numbers are not equal!" << endl;
	
	
	Complex c3 = complex_add(c1, c2);
	cout << "First complex plus second complex is: ";
	c3.print();
	
	Complex c4 = complex_sub(c1, c2);
	cout << "First complex minus second complex is: ";
	c4.print();
	
	return 0;
	
}


