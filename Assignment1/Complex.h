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
