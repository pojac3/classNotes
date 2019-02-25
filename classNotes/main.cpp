/*
 * LinkedList works by keeping track of where the next piece of information can be found. In arrays, the information is all next to each other.
 * When we insert data into a vector, we have to move all the data around so that we can keep track of where it all is
 * LinkedList does not have to shift anybody around! Uses pointers to not have to do that.
 * info means tell me what u got
 * size(), info(), add(), insert(), LinkedList is a recursive defintition. points to another LinkedList!
 * LinkedList has a piece of info which points to another piece of the LinkedList.
 * if i want info at the 3rd position, i can build infoAt from info and next operation. Every element of a LinkedList is a LinkedList.
 * All these operations can be done on an array. Thats why you need a primitive data type
 */

#include <iostream>
using namespace std;

template <class DT>
class LinkedList {
protected:
    DT* _info;
    DT* _size;
    LinkedList _next;
public:
    LinkedList<DT>();
    LinkedList<DT>(const LinkedList<DT>& LL);
    LinkedList<DT>& operator= (const LinkedList<DT>& LL);
    ~LinkedList();
    LinkedList<DT> next();
    int size();
    void remove();
    void add(LinkedList<DT>& LL);
    DT& info();
    DT& operator[] (int x);
};

int main() {
    LinkedList<int>* myL;
    myL = new LinkedList<int>();
};
