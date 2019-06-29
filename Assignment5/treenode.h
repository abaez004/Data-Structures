#ifndef TREE_NODE_H
#define TREE_NODE_H

#include <iostream>

namespace angel_assignment_5{
	template <typename T>
	class treenode{
		public:
			//precondition:data, key, left_child, and right_child must be valid
			//postcondition:constructs a treenode with data, key, left_child and right_child
			treenode(const T& data, int key, treenode* left_child = nullptr, treenode* right_child = nullptr);
			
			//precondition:copy must be valid instance
			//postcondition:constructs a treenode using copy
			treenode(const treenode<T>& copy);
			
			//precondition:copy must be valid instance
			//postcondition:assigns copy to this instance 
			treenode<T>& operator=(const treenode<T>& copy);
			
			//precondition:data must be valid
			//postcondition:returns the data of the treenode
			T get_data() const {return data;}
			
			//precondition:key must be valid
			//postcondition:returns key
			int get_key() const {return key;}
			
			//precondition:left_child must be valid
			//postcondition:returns left_child
			treenode* get_left() const {return left_child;}
			
			//precondition:right_child must be valid
			//postcondition:returns right_child
			treenode* get_right() const {return right_child;}
			
			//precondition:left_child must be valid
			//postcondition:returns a reference of left_child
			treenode*& get_left() {return left_child;}
			
			//precondition:right_child must be valid
			//postcondition:returns a reference of right_child
			treenode*& get_right() {return right_child;}
			
			//precondition:data must be valid
			//postcondition:change to data
			void set_data(const T& data) {treenode<T>::data = data;}
			
			//precondition:key must be valid
			//postcondition:changes to key
			void set_key(int key) {treenode<T>::key = key;}
			
			//precondition:left_child must be valid
			//postcondition:changes to left_child
			void set_left(treenode* left_child) {treenode<T>::left_child = left_child;}
			
			//precondition:right_child must be valid
			//postcondition:changes to right_child
			void set_right(treenode*  right_child) {treenode<T>::right_child = right_child;}
			
		private:
			T data;
			int key;
			treenode<T>* left_child;
			treenode<T>* right_child;
	};
	
	//precondition:n must be a valid treenode
	//postcondition:prints the data of the treenode
	template <typename T>
	std::ostream& operator<<(std::ostream& out, const treenode<T>& n);
	
	//precondition:root, key and data must be valid
	//postcondition:inserts root into binary search tree
	template <typename T>
	void bs_tree_insert_root(treenode<T>*& root, int key, const T& data);
	
	//precondition:root, key and data must be valid
	//postcondition:inserts new treenode into tree
	template <typename T>
	void bs_tree_insert(treenode<T>*& root, int key, const T& data);
	
	//precondition:root and key must be valid, key must be in a node in the tree
	//postcondition:removes treenode with key from tree
	template <typename T>
	void bs_tree_remove(treenode<T>*& root, int key);
	
	//precondition:node with key must be in tree, root must be valid
	//postcondition:returns the data of node with given key
	template <typename T>
	T bs_tree_search(treenode<T>* root, int key);
	
	//precondition:root must be valid
	//postcondition:prints empty if root is null, or calls bs_tree_print_helper
	template <typename T>
	void bs_tree_print(treenode<T>* root);
	
	//precondition:root must be valid
	//postcondition:prints the data of the tree
	template <typename T>
	void bs_tree_print_helper(treenode<T>* root);
	
	//precondition:root must be valid treenode
	//postcondition:clears the tree from memory
	template <typename T>
	void bs_tree_clear(treenode<T>* root);
	
	//precondition:root must be valid treenode
	//postcondition:removes the root node from the tree and calls bs_tree_clear to remove rest
	template <typename T>
	void bs_tree_clear_helper(treenode<T>*& root);
	
	//precondition:from and to must be valid treenodes
	//postcondition:copies nodes from treenode from, to treenode to
	template <typename T>
	void bs_tree_copy_helper(const treenode<T>* from, treenode<T>*& to);
	
	//precondition:root must be valid
	//postcondition:returns a copy of the bs tree with root 
	template <typename T>
	treenode<T>* bs_tree_copy(const treenode<T>* root);
} 

#include "treenode.template"
#endif
