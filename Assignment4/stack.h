#ifndef STACK_H
#define STACK_H

#include <cstdlib>
#include <cassert>
namespace angel_assignment_4{
	template <typename T>
	class stack{
		public:
			//precondition:capacity must be greater than 1
			//postcondition:creates a stack with capacity or 20 as default
			stack(std::size_t capacity = 20);
			
			//precondition:copy is a valid stack instance
			//postcondition:instantiates a stack using copy
			stack(const stack& copy);
			
			//precondition:copy is a valid stack instance and not the same as this stack
			//postcondition:assigns copy to this stack
			stack& operator=(const stack& copy);
			
			//precondition:must be called on a valid stack instance
			//postcondition:deallocates memory of data
			~stack();
			
			//precondition:item is valid and used < capacity
			//postcondition:pushes item onto stack
			void push(const T& item);
			
			//precondition:stack must not be empty
			//postcondition:removes item from top of stack and returns it
			T pop();
			
			//precondition:stack must not be empty
			//postcondition:returns the top element of the stack
			T peek() const;
			
			//precondition:must be called off a valid stack instance
			//postcondition:returns true if stack is empty and false otherwise
			bool isEmpty() const;
	
		private:
			std::size_t used;
			std::size_t capacity; 
			T* data;
	};

}

#include "stack.template"
#endif
