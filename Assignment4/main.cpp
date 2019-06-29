#include <iostream>
#include "node.h"
#include "linkedlistEC.h"
#include "linkedlist.h"
#include "stack.h"
using namespace std;
using namespace angel_assignment_4;

int main(){
   cout << "Linked list without Extra Credit\n\n";
   linkedlist<int> list1;
   list1.insertHead(5);
   list1.insertAt(1, 3);
   list1.insertAt(2, 4);
   list1.insertAt(3, 9);
   cout << "list1 contains: " << list1 << endl;
   list1.update(1, 10);
   cout << "list1 index 1 has been changed to 10: " << list1 << endl;
   list1.redo(1);
   cout << "The changes to list1 have been reverted: " << list1 << endl;
   
   cout << "\n\nLinked list with Extra Credit\n\n";
   linkedlistEC<int> list2;
   list2.insertHead(93);
   list2.insertAt(1, 87);
   list2.insertAt(2, 22);
   list2.insertAt(3, 31);
   cout << "list2 contains: " << list2 << endl;
   list2.update(1, 55);
   cout << "list2 index 1 has been changed to 55: " << list2 << endl;
   list2.redo();
   cout << "The changes to l1 have been reverted: " << list2 << endl;
   list2.removeFrom(2);
   cout << "list2 has index 2 removed: " << list2 << endl;
   cout << "Redoing the entire linked list until it becomes empty\n\n";
   list2.redo();
   cout << list2 << endl;
   list2.redo();
   cout << list2 << endl;
   list2.redo();
   cout << list2 << endl;
   list2.redo();
   cout << list2 << endl;
   list2.redo();
   cout << list2 << endl;
}
