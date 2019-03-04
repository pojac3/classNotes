/**
 * Stuff in class today will be on the exam on wednesday
 * Array Implementation
 * LinkedList implementation
 * pop(); and push(); function
 * might ask us to write a c++ class definition for a stack data structure
 * StackOverflowException and StackUnderflow exception
 * In a LinkedList implementation of a stack, pop(); is the same as remove and push(); is the same as add
 * Arithmetic Expression is the same as infix expression. in x+2, x and 2 are the operands and + is the operator
 * In arithmetic expression, we take the infix expression and convert it to a postfix expression. so like xy needs to be converted to x*y
 * In postfix evaluation, xsub2 is an operand. Go through each token and decide if its an operand or operator. add it to an operand or operator array
 * Postfix expression pseudocode:
 * s <- stack
 * while (there is more tokens) {
 *   A = getNextToken();
 *   if (A is an operator) {
 *      a1 = s.pop();
 *      a2 = s.pop();
 *      perform a1 A a2
 *      x = result of a1 A a2
 *      s.push(x);
 *   }
 * MAY ASK US TO WRITE AN ALGORITHM ON HOW TO CONVERT FROM INFIX TO POSTFIX AND VICE VERSA
 * First question will be on stacks. GO READ ABOUT STACKS. PROBABLY EXPRESSION EVALUATION. Running through the maze
 * Know C++ class def for a LinkedList, size, remove, add removeAt, destructor, etc
 * Know how to do [] operator on a LinkedList. Should return the BOX _info. Not a pointer to _info. 
 * Define any method that you use. 
 * Know array implementation of a LinkedList. 
 * Give C++ defintion for a Generalized List. Inherits LinkedList!
 * LinkedList might have a super node. These point to a whole bunch of nodes. 
 * Go through the quiz questions!!!
 * Binary search recursive and non recursive algorithm!
 * ArrayClass. How to initialize one.
 * Oh ya and know Big O Notation
 * Counting number of primitive operations
 * Might give a program and specify the number of errors, gotta find all the errors
 * Write legibly
 */

#include <iostream>
using namespace std;
int n = 50;
int x = 0;
int main() {
    for (int i = 0; i < n; i++){ //3n+2
        for (int j = 0; j < n; j++) { //n*(3n+2)
            x = x + 1; //2*n*n
        }
    }
        
}
