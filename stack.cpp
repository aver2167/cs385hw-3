/*  stack.cpp
 *
 *  Definition of Stack class member functions.
 */

//Lydia E. edits

#include <iostream.h>
#include <assert.h>
#include "stack.h"


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

//\end{verbatim}  \lecpb  \begin{verbatim}

void Stack::Push(int n)
{
   topPtr.AddNode( n );
}


int Stack::Pop()
{
   assert(!IsEmpty());

   int  n = topPtr.FirstNode();
   topPtr.DeleteNode( n );
   return n;
}

//\end{verbatim}  \lecpb  \begin{verbatim}

int Stack::IsEmpty()
{
    int n = topPtr.Size();
    return (n == 0);
}


void Stack::Print()
{
    topPtr.PrintNodes();
}

