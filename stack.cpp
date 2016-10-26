/*  stack.cpp
 *
 *  Definition of Stack class member functions.
*/

#include <iostream>
#include "stack.h"
using namespace std;


Stack::Stack()
{
}


Stack::~Stack()
{
   //delete topPtr;
   while( !IsEmpty() ) {
       int  n = topPtr.FirstNode();
       topPtr.DeleteNode( n );
   }
}

void Stack::Push(char n)
{
   topPtr.AddNode( n );
}


char Stack::Pop()
{
    if(!IsEmpty()){
        int  n = topPtr.FirstNode();
        topPtr.DeleteNode( n );
        return n;
    } else {
        return 0;
    }
}


int Stack::IsEmpty()
{
    char n = topPtr.Size();
    return (n == 0);
}


void Stack::Print()
{
    topPtr.PrintNodes();
}

