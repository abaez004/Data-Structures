#ifndef LINKEDLISTEC_H
#define LINKEDLISTEC_H

#include "node.h"
#include "stack.h"
#include <iostream>
#include <cstdlib>
namespace angel_assignment_4{
	template <typename T>
	class linkedlistEC{
		template <typename V>
		friend std::ostream& operator<<(std::ostream& out, const linkedlistEC<V>& link);
		public:
			//precondition:headptr is a valid pointer
			//postcondition:initializes a linked list with either passed in headptr or NULL
			linkedlistEC(node<T>* headptr = NULL);
			
			//precondition:copy is a valid instance of a linked list
			//postcondition:instantiates a linked list using copy. The stack of this becomes the top element of the copy stack.
			linkedlistEC(const linkedlistEC& copy);
			
			//precondition:copy is a valid instance of a linked list and not the same as this
			//postcondition:recreates this instance of a linked list to match copy. The stack of this becomes the top element of the copy stack.
			linkedlistEC& operator=(const linkedlistEC& copy);
			
			//precondition:this is a valid instance of a linked list
			//postcondition:deallocates dynamic memory of the entire list
			~linkedlistEC();
			
			//precondition:data is valid
			//postcondition:inserts a node with data into the head of the linked list
			void insertHead(const T& data);
			
			//precondtion:index < size and value is valid
			//postcondition:inserts a new node with value into the linked list at the index
			void insertAt(size_t index, const T& value);
			
			//precondtion:headptr is no NULL
			//postcondition:removes the head of the linked list
			void removeHead();
			
			//precondition:index < size
			//postcondition:removes the node at index from linked list
			void removeFrom(std::size_t index);
			
			//precondition:index < size and the node's stack must not be full
			//postcondition:updates the value of a node at the index of the linked list
			void update(std::size_t index, const T& value);
			
			//precondition:the stack of the node is non empty
			//postcondition:reverts any update made to the linked list
			void redo();
			
			//precondition:must be called on a valid linked list instance
			//postcondition:returns the size of the linked list	
			size_t size() const;
		private:
			stack<node<T>*>* headptr;
			void copy();
	};
	
}

#include "linkedlistEC.template"
#endif
