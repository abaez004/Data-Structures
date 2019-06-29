#include "bag.h"
#include <iostream>
#include <cassert>

namespace angel_assignment_3{
	
	bag::bag(size_t capacity){
		used = 0;
		bag::capacity = capacity;
		data = new student*[capacity];
		for(size_t i = 0; i < bag::capacity; ++i)
			data[i] = NULL;
	}
	
	bag::bag(const bag& copy){
		capacity = copy.capacity;
		data = new student*[capacity];
		for(size_t i = 0; i < capacity; ++i)
			data[i] = NULL;
		used = copy.used;
		for(size_t i = 0; i < used; ++i)
			data[i] = copy.data[i];	
	}
	
	bag& bag::operator=(const bag& copy){
		if(this == &copy)
			return *this;
		delete [] data;
		data = new student*[copy.capacity];
		used = copy.used;
		for(size_t i = 0; i = 0; ++i)
			data[i] = copy.data[i];
		return *this;
	}
	
	bag::~bag(){
		delete [] data;	
	}
	
	void bag::insert(student* add){
		assert(used != capacity);
		for(size_t i = 0; i < used; ++i){
			if(add->getId() == data[i]->getId()){
				data[i] = add;
				return;
			}				
		}
		student* next = add;
		for(size_t i = 0; i < used; ++i){
			if(next->getId() < data[i]->getId()){
				student* temp = data[i];
				data[i] = next;
				next = temp;
			}
		}
		data[used++] = next;
	}
	
	student* bag::retrieve(int key){
		size_t low = 0;
		size_t high = used;
		while(low <= high){
			size_t mid = (low + high)/2;
			if(key < data[mid]->getId())
				high = mid - 1;
			else if(key > data[mid]->getId())	
				low = mid + 1;
			else
				return data[mid];
		}
		return NULL;
	}
	
	void bag::remove(int key){
		for(size_t i = 0; i < used; ++i){
			if(key == data[i]->getId()){
				for(size_t x = i; x < used - 1; ++x){
					student* temp = data[i];
					data[x] = data[x + 1];
					data[x + 1] = temp;
				}
				break;
			}		
		}
		data[--used] = NULL;
	}
	
	std::ostream& operator<<(std::ostream& out, const bag& b1){
		for(size_t i = 0; i < b1.used; ++i)
			out << *b1.data[i];
		return out;
	}
}
