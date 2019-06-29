#include "student.h"
#include <iostream>
#include <string>

namespace angel_assignment_3{
	student::student(std::string fname, std::string lname, int id){
		student::fname = fname;
		student::lname = lname;
		student::id = id;
	}
	
	std::ostream& operator<<(std::ostream& out, const student& stu){
		out << stu.fname << ", " << stu.lname << ", " << stu.id << ".\n";
		return out;
	}
	

}
