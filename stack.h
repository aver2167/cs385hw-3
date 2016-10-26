/* stack.h
 *
 * Definition of Stack class
 */

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <assert.h>
#include "link.h"
using namespace std;


class Stack {
public:
   Stack();
   ~Stack();

   void Push(char n);     // push item onto stack
   char Pop();            // remove item from stack if the stack is empty, returns 0;
   int IsEmpty();        // is the stack empty?
   void Print();         // print the stack

private:
   LinkedList topPtr;    // pointer to list
};


#endif
