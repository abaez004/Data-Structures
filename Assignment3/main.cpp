#include "student.h"
#include "bag.h"
#include <iostream>
#include <string>
using namespace std;
using namespace angel_assignment_3;

int main(){
	student angel("angel", "baez", 8);
	student livia("livia", "lee", 3);
	student evan("evan", "gelos", 4);
	student wilson("wilson", "wong", 2);
	student john("john", "wick", 0);
	cout << angel << livia << evan << wilson << john << endl;
	
	bag b1(10);
	b1.insert(&angel);
	b1.insert(&livia);
	b1.insert(&evan);
	b1.insert(&john);
	b1.insert(&wilson);
	cout << "The contents of bag b1 are:\n" << b1 << endl;
	
	b1.remove(4);
	cout << "Student with id 4 has been removed, bag b1 now contains:\n" << b1;
	
	cout << "\nSearching for student with id 4 in b1:";
	if(b1.retrieve(4) != NULL)
		cout << *b1.retrieve(4);
	else
		cout << "could not be found!\n";
		
	cout << "Searching for student with id 8 in b1:";
	if(b1.retrieve(8) != NULL)
		cout << *b1.retrieve(8);
	else
		cout << "could not be found!\n";
		
	bag b2 = b1;
	cout << "\nPrinting b2, a bag created using copy constructer passing b1:\n" << b2;
	
	student chris("chris", "gittins", 3);
	b2.insert(&chris);
	cout << "\nInserting student chris, with id 3 into bag b2 with student livia also id 3:\n"<< b2;
	
}
