#ifndef NODE_H
#define NODE_H

#include <iostream>

namespace angel_assignment_5{
	template <typename T>
	class node{
		public:
			//precondition:data is valid, key is an integer > 0 and next is a valid pointer to a node
			//postcondition:instantiates a node using data, key and next, or nullptr if not provided next
			node(const T& data, int key, node* next = nullptr);
			
			//precondition:copy is a valid node instance
			//postcondition:instantiates a node using copy
			node(const node& copy);
			
			//precondition:copy is a valid node instance and not the same as this
			//postcondition:assigns the values of this using copy
			node& operator=(const node& copy);
			
			//precondition:must be a valid node instance
			//postcondition:deallocates memory from data and sets next to nullptr
			~node();
			
			//precondition:next points to a valid node instance
			//postcondition:sets the next of this node to the parameter next
			void set_next(node* next){node::next = next;}
			
			//precondition:data is a valid data instance
			//postcondition:sets the data of this node to the parameter data
			void set_data(const T& data){node::data = data;}
			
			//precondition:the data must be valid
			//postcondition:returns the data of the node
			T get_data() const {return data;}
			
			//precondition:key must be valid
			//postcondition:returns the key of the node
			int get_key() const {return key;}
			
			//precondition:next must be a valid node pointer or nullptr
			//postcondition:returns the next of this
			node* get_next() const {return next;}
			
		private:
			T data;
			int key;
			node<T>* next;
	};
	
	//precondition:must be called off of a valid node instance
	//postcondition:prints data of the node
	template <typename T>
	std::ostream& operator<<(std::ostream& out, const node<T>& n);
	
	//precondition:headptr must be a valid node 
	//postcondition:clears the linked list starting with headptr, and frees dynamic memory
	template <typename T>
	void linkedlist_clear_list(node<T>*& headptr); 
	
	//precondition:headptr, key and data are all valid
	//postcondition:inserts a new node at the end of the linked list, or if key is found, changes that node's data to data
	template <typename T>
	void linkedlist_insert(node<T>*& headptr, int key, const T& data);
	
	//precondition:headptr, key and data are all valid
	//postcondition:inserts a node at the head of the list using key and data
	template <typename T>
	void linkedlist_insert_head(node<T>*& headptr, int key, const T& data);
	
	//precondition:a node with key must be inside the linked list
	//postcondition:removes the node with that key from the linked list
	template <typename T>
	void linkedlist_remove_key(node<T>*& headptr, int key);
	
	//precondition:headptr must be valid
	//postcondition:headptr is removed from the linked list and freed from memory
	template <typename T>
	void linkedlist_remove_head(node<T>*& headptr);
	
	//precondition:headptr must be valid
	//postcondition:prints the size of the linked list
	template <typename T>
	int linkedlist_size(node<T>* headptr);
	
	//precondition:headptr must be valid and key must be inside the linked list
	//postcondition:returns data if key is found
	template <typename T>
	T linkedlist_key_search(node<T>* headptr, int key);
	
	//precondition:headptr and data must be valid, and key must be inside linked list
	//postcondition:replaces node with data if the key is found in the list, and returns true
	//returns false if not found
	template <typename T>
	bool linkedlist_replace_duplicate_key(node<T>* headptr, int key, const T& data);
	
	//precondition:source must be valid linked list
	//postcondition:a copy of list from source is copied into destination
	template <typename T>
	void linkedlist_copy(node<T>* source, node<T>*& destination);
	
	//precondition:headptr must be valid
	//postcondition:prints the linked list, or empty if not found
	template <typename T>
	void linkedlist_print(node<T>* headptr);
}

#include "node.template"
#endif
