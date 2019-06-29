#ifndef HASH_LINKED_H
#define HASH_LINKED_H

#include <iostream>
#include "node.h"

namespace angel_assignment_5{
	template <typename T>
	class HashTableL{
	
		//precondition:t is a valid hash table
		//postcondition:prints contents of t
		template <typename V>
		friend std::ostream& operator<<(std::ostream& out, const HashTableL<V>& t);
		public:
			//precondition:capacity must be valid
			//postcondition:constructs a hash table using linked list with maximum size capacity
			HashTableL(std::size_t capacity = 20);
		
			//precondition:copy must be valid
			//postcondition:constructs hash table with linked list using copy
            HashTableL(const HashTableL& copy);
			
			//precondition:copy must be valid
			//postcondition:assigns values of this hash table with linked list using copy
			HashTableL& operator=(const HashTableL& copy);
			
			//precondition:must be called off valid hash table
			//postcondition:releases memory of data
			~HashTableL();	
			
			//precondition:key and value must be valid
			//postcondition:adds new entry into table using linked list and hash function
			void put(int key, const T& value);
			
			//precondition:key must be valid and in the table
			//postcondition:returns the data found at that key if found
			T get(int key) const;
		
			//precondition:key must be valid and in the table
			//postcondition:removes the node from data with given key
			void remove(int key);
		private:
			std::size_t capacity;
			node<T>** data;
			
			//precondition:key is valid
			//postcondition:turns key into index for array data
			int hashFunction(int key);
	};

}

#include "HashTableL.template"
#endif
