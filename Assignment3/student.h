#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

namespace angel_assignment_3{
	
	class student{
		//precondition:stu is a valid student object.
		//postcondition:prints the student's first name, last name, and id.
		friend std::ostream& operator<<(std::ostream& out, const student& stu);
		public:
			//precondition:fname, lname and id are all valid input, and id > 0.
			//postcondition:instantiates a student object with first name, last name and id number.
			student(std::string fname, std::string lname, int id);
			
			//precondition:must be called off of a valid student object.
			//postcondition:returns the id of the student.
			int getId() const { return id; }
		private:
			std::string fname;
			std::string lname;
			int id;
	};

}




#endif
