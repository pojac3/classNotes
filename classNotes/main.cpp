/*
 understand array, overloaded = operator, destructor, overloaded brackets, ArrayClass
 understand class definition, write only method prototypes in the public field
 understand overloaded [] operator
 ArrayClass<SparseRow<int>>
 ArrayClass<char> <-- String
 ArrayClass<int*>* one
 one = new ArrayClass<int*>(10);
 for loop to initialize each element there
 (*one)[i] = new int(0);

 ArrayClass<ArrayClass<int>*>* two;
 two = new ArrayClass<ArrayClass<int>*>(10);
 for loop
 *(two)[i] = new ArrayClass<int>(10);

 int mat[i][j]
 SparseMatrix
 ArrayClass of ArrayClass objects
 Row major ordering
 Column major ordering
 
 sorting algorithms
 merge sort algorithm
 simple bucket sort => O(n+m)
 
 simple binary search => O(log(n))
 
 */

#include <iostream>
using namespace std;

//sorta kinda binarySearch
bool binarySearch (int A, int L, int R, int key) {
    if (L < R) {
        int mid = ((L+R)/2);
        if (A[mid] == key) {
            return true;
        } else if (A[mid] > key) {
            binarySearch (A, (L+R/2), mid, key);
        }
    } else {
        return false;
    }
}

int main() {
}
