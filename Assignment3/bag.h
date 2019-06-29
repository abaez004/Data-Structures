#ifndef BAG_H
#define BAG_H

#include <iostream>
#include "student.h"

namespace angel_assignment_3{
	class bag{
		//precondition:b1 is a valid bag instance.
		//postcondition:prints the contents of b1.
		friend std::ostream& operator<<(std::ostream& out, const bag& b1);
		
		public:
			//precondition:capacity is a valid size_t.
			//postcondition:creates a bag instance with size capacity or 20 if not specified.
			bag(size_t capacity = 20);
			
			//precondition:copy is a valid bag instance.
			//postcondition:instantiates a bag using the values of copy.
			bag(const bag& copy);
			
			//precondition:copy is a valid bag instance, and not the same bag as this bag.
			//postcondition:assigns this bag to the copy bag.
			bag& operator=(const bag& copy);
			
			
			//postcondition:deallocates the data from dynamic memory.
			~bag();
			
			//precondition:next student is a student with a unique id, not already in the bag.
			//postcondition:inserts the pointer next into sorted position in the bag. If a student 
			//with similar id is being added, the old student will be replaced.
			void insert(student* next);
			
			//precondition:key is a valid key that corresponds to a student's id.
			//postcondition:removes the student with that id, and shifts the data accordingly.
			void remove(int key);
			
			//precondition:key is a valid key that corresponds to a student's id.
			//postcondition:returns NULL if the student wasn't found, otherwise returns the pointer of the
			student* retrieve(int key);
		private:
			student** data;
			size_t capacity;
			int used;
			void sort();
	};
}




#endif
