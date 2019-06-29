#ifndef COMPLEX_H
#define COMPLEX_H	
namespace angel_complex{
	class Complex{	
		public:
			
			//Precondition: r and i can be any int.
			//Postcondtion: Creates a Complex number instance, taking in two integers.
			//r is the real portion, and i is the imaginary portion.
			Complex(int r, int i);
			
			//Precondition: must be called off of a Complex object created using the provided constructor.
			//Postcondition: returns the value of the imaginary portion of the Complex number.
			int getImaginary() const;
			
			//Precondition: must be called off of a Complex object created using the provided constructor.
			//Postcondition: returns the value of the real portion of the Complex number.
			int getReal() const;
			
			//Precondition: must be called off of a Complex object created using the provided constructor.
			//Postcondition: prints the Complex number in a+bi form, where a is the real number and b is the imaginary coefficient.
			void print() const;	
			
			//Precondition: r and i can be any valid integer and must be called off of a valid instance of Complex.
			//Postcondition: Shifts the values of the instance's fields by r and i. Increases the fields by 1 if none or only 1 value specified.
			void shift(int r = 1, int i = 1);
		private:
			int imaginary;
			int real;
		
	};
	
	//Precondition: both Complex arguments must contain valid data through the use of the provided constructor.
	//Postcondition: adds two Complex number instances and returns a Complex instance with the result of the addition.
	Complex complex_add(const Complex & comp1, const Complex & comp2);
	
	//Precondition: both Complex arguments must contain valid data through the use of the provided constructor.
	//Postcondition: subtracts two Complex number instances and returns a Complex instance with the result of the subtraction.
	Complex complex_sub(const Complex & comp1, const Complex & comp2);
	
	//Precondition: both Complex arguments must contain valid data through the use of the provided constructor.
	//Postcondition: returns true if both Complex number's real and imaginary portions are equal, and false otherwise.
	bool complex_equal(const Complex & comp1, const Complex & comp2);
}
#endif
