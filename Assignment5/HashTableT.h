#ifndef HASH_TREE_H
#define HASH_TREE_H

#include <iostream>
#include "treenode.h"

namespace angel_assignment_5{
	template <typename T>
	class HashTableT{
		
		//precondition:t must be a valid hash table
		//postcondition:prints the contents of t
		template<typename V>
		friend std::ostream& operator<<(std::ostream& out, const HashTableT<V>& t);
		public:
		
			//precondition:capacity must be valid
			//postcondition:constructs a hash table using bs tree with capacity
			HashTableT(std::size_t capacity = 20);
			
			//precondition:copy must be valid
			//postcondition:constructs a hash table using copy
			HashTableT(const HashTableT& copy);
			
			//precondition:copy must be valid
			//postcondition:assigns the values of copy to t
			HashTableT& operator=(const HashTableT& copy);
			
			//precondition:must be called off a valid hash table 
			//postcondition:releases dynamic memory of hash table
			~HashTableT();			
			
			//precondition:key and value are valid
			//postcondition:inserts a new tree node with key and value into the hash table
			void put(int key, const T& value);
			
			//precondition:key must be valid and in the hash table
			//postcondition:returns the value associated with key
			T get(int key) const;
			
			//precondition:key must be valid and inside the hash table
			//postcondition:removes the entry that has corresponding key
			void remove(int key);
			
		
		private:
			std::size_t capacity;
			treenode<T>** data;
			
			//precondition:key must be valid
			//postcondition:produces an index for access to the hash table
			int hashFunction(int key);
	};

}
#include "HashTableT.template"
#endif
