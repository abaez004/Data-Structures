#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "stack.h"

namespace angel_assignment_4{
	template <typename T>
	class node{
		public:
			//precondition:data is valid and next is a valid pointer to a node
			//postcondition:instantiates a node using data and next, or null if not provided next
			node(const T& data, node* next = NULL);
			
			//precondition:copy is a valid node instance
			//postcondition:instantiates a node using copy
			node(const node& copy);
			
			//precondition:copy is a valid node instance and not the same as this
			//postcondition:assigns the values of this using copy
			node& operator=(const node& copy);
			
			//precondition:must be a valid node instance
			//postcondition:deallocates memory from data and sets next to null
			~node();
			
			//precondition:next points to a valid node instance
			//postcondition:sets the next of this node to the parameter next
			void set_next(node* next){node::next = next;}
			
			//precondition:data is a valid data instance
			//postcondition:sets the data of this node to the parameter data
			void set_data(const T& data){node::data = data;}
			
			//precondition:the data stack must not be empty
			//postcondition:returns the elements on the top of the data stack
			T get_data() const {return data->peek();}
			
			//precondition:next must be a valid node pointer or null
			//postcondition:returns the next of this
			node* get_next() const {return next;}
			
			//precondition:data must be valid and the data stack must not be full
			//postcondition:pushes the new data onto the data stack
			void update(const T& data);
			
			//precondition:data must not be empty
			//postcondition:pops an element from the data stack
			void redo();
		private:
			stack<T>* data;
			node* next;
	};
	
	//precondition:must be called off of a valid node instance
	//postcondition:prints the top element of the data stack
	template <typename T>
	std::ostream& operator<<(std::ostream& out, const node<T>& n);
}

#include "node.template"
#endif
