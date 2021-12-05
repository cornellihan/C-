#include <iostream>
using namespace std;

/* Stack is a linear data structure where it collects data. Like when we pile some books, we have to put one book to the top of another book and when we remove a book, we have to remove the top book, then the next, and so on. So that means we can perform 2 kinds of operations, adding and removing from the top. Thus, a stack is a data structure that follows the principle called LIFO (Last In First Out).

In programming terms, putting an item ont he top of the stack is called "push" and removing an item is called "pop". A pointer or indexer that keeps the index location of the last element is called Top.

How Stack Works-
    If the stack is empty, that means there is no element on the stack. Thus, Top = -1
    If the stack has only one element then Top will be 0 e.i. the first index of the array
    For every pop operation, Top should be decreased and for every push operation, Top should be increased
    If the stack is full, this means every index of the array has an element, and then Top = N-1
    A stack can also be implemented using Likned List, but in that case, the Top can never be full becasue linked list has no limitation of pushing elements

Operations on Stack
    Push: Adding an element to the top of a stack
    Pop: Removing an element from the top of a stack
    IsEmpty: Checking if the stack is empty
    IsFull: Checking if the stack is full
    Peek: Getting the value of the top element without removing it
    
*/

int main()
{

    return 0;
}