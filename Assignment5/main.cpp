#include <iostream>
#include <cstdlib>
#include <ctime>
#include "node.h"
#include "treenode.h"
#include "HashTableL.h"
#include "HashTableT.h"
using namespace angel_assignment_5;
using namespace std;
int main(){
	HashTableT<int> h1(1000);
	HashTableT<int>h2(1000);
	HashTableT<int>h3(1000);
	HashTableL<int>h4(1000);
	HashTableL<int>h5(1000);
	HashTableL<int>h6(1000);
	int runs = 500000;
	const int arrSize = 500000;
	srand(time(0));
	int keyArray[arrSize];
	for(int i = 0; i < arrSize; ++i){
		keyArray[i] = (rand() % 100000);	
	}
	
	clock_t start;
    double duration, duration2, duration3, duration4;
    start = clock();
	for(int i = 0; i < runs; ++i){
		h1.put(keyArray[i], i);
	}
    duration = (clock() - start)/(double) CLOCKS_PER_SEC;
    
    start = clock();
	for(int i = 0; i < runs; ++i){
		h4.put(keyArray[i], i);
	}
    duration2 = (clock() - start)/(double) CLOCKS_PER_SEC;
    
   cout << "Linked List: " << duration2 << endl << "BS Tree: " << duration;
}
