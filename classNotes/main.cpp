/* 
 * Class Notes Feb 27
 * Chapter 1, 2, 3 and 4 will be on the exam
 * 
 * Other forms of LinkedList:
 * DoublyLinkedList. These have a next and previous pointer. The last element in this is just null
 * CircularLinkedList. The last element points to the first element in this one.
 * GeneralizedList. Has a next pointer and a down pointer. Can be use to store a tree of data
 * 
 * S T A C K S  A N D  Q U E U E S
 * The stack is meant to remember the recent past. Stacks are used for backtracking!! 
 * Peak and pop. This is a last in, last out data structure. The last element in a stack is the of the stack. 
 * Peak and push takes O(1) time. 
 * Dont continuously push something to the stack, cause you will get a StackOverflowException
 * Dont continuously pop something from the stack, cause you will get a StackUnderflowException
 * 
 * TEST QUESTION: Give me a LinkedList representation of a stack. Defined below
 */
#include <iostream>
using namespace std;

template <class DT>
class ArrayStack {
protected:
    int _top;
    int _size;
    ArrayClass<DT>* myStack;
public:
    ArrayStack();
    ArrayStack(int somethingGoesHere);
    virtual ~ArrayStack();
    DT& pop();
    void push(DT& x);
    DT& peak();
    int size();
    
};

template <class DT>
void ArrayStack::push(DT& x) {
    if (_top == *s.size())
}


int main () {
    ArrayStack<int>* myStack = new ArrayStack<int>(100);
    (*myStack).push(100);
    (*myStack).push(20);
};
