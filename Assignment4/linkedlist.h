#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <iostream>
#include <cstdlib>
namespace angel_assignment_4{
	template <typename T>
	class linkedlist{
		template <typename V>
		friend std::ostream& operator<<(std::ostream& out, const linkedlist<V>& link);
		public:
			//precondition:headptr is a valid pointer
			//postcondition:initializes a linked list with either passed in headptr or NULL
			linkedlist(node<T>* headptr = NULL){linkedlist::headptr = headptr;}
			
			//precondition:copy is a valid instance of a linked list
			//postcondition:instantiates a linked list using copy
			linkedlist(const linkedlist& copy);
			
			//precondition:copy is a valid instance of a linked list and not the same as this
			//postcondition:recreates this instance of a linked list to match copy
			linkedlist& operator=(const linkedlist& copy);
			
			//precondition:this is a valid instance of a linked list
			//postcondition:deallocates dynamic memory of the entire list
			~linkedlist();
			
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
			//postcondition:reverts a single change to the node at index of the linked list
			void redo(std::size_t index);
			
			//precondition:must be called on a valid linked list instance
			//postcondition:returns the size of the linked list	
			size_t size() const;
		private:
			node<T>* headptr;
	};
	
}

#include "linkedlist.template"
#endif
