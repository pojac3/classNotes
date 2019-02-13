//Class notes Feb 13, Data Structures
//We are currently in chapter 3 of the textbook
//
#include <iostream>
using namespace std;

int x[100];
int* y = new int[100];

template <class DT>
class ArrayClass {
public:
    AbstractArrayClass<DT>;
protected:
    DT* _myArray;
    //ArrayException would contain ArrayOutOfBoundsException and ArrayOutOfMemoryException
    int _size;
    
};

template <class DT>
ArrayClass<DT>& ArrayClass<DT>::operator= {
    _myArray = AC.myArray;
    delete[] _myArray;
    _myArray = new DT[AC.sign()];
    _size = AC.size();
    for (int i = 0; i < _size; i++) {
        
    }
};

int main() {
    
    ArrayClass<int> x(100);
    ArrayClass<int>* y = new ArrayClass<int>(5);
    
    for (int i = 0; i < x.size; i++) {
        x[i] = 0;
    }
    
    
    
    
    //must have get method, set (i,value), size and
}

//QUIZ QUESTION:
