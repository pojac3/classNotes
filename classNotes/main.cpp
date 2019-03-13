/**
 * Class Notes March 11
 * Project4 will not be an extension of Project3
 * Stack is a LIFO data structure, Queue is a FIFO data structure
 * dequeue is the same as pop, but it removes from the front instead of from the back
 * enqueue is insertAt(x, size()), dequeue is remove(), peek is info()
 * Look at the book for Queue! WILL BE ON THE EXAM!
 * front = (front + 1) % n;
 * rear = (rear + 1) % n;
 * ^^^ n is passed in, the size of the array (line 6)
 * simple bucket sort:
 * -non comparison based sorting algorithm
 * -we know the largest number
 * -large numbers
 * -duplicates
 * -largest number is too big relative to the other numbers to be sorted, ie {1, 5, 872359} would be very bad
 * -time complexity is O(n+m), where m is the largest number, and n is the number of numbers
 * -space complexity is ridiculous! if n+m is 100, then it requires 100*n space!!!
 * 
 * Radix Sort:
 * -another non comparison based sorting algorithm
 * -largest number is known
 * -uses the queue data structure
 * -worst case scenario is (10 + n) with an array size of 10
 * 
 */

#include <iostream>
using namespace std;

int main () {
    
}
