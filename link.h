/*  link.h*/
// This is a class for a linked list of integers.
//THIS IS LINK.H YADADAYYASDFASDFSADFASDFASDF
#ifndef LINK_H
#define LINK_H

#ifdef NOT_USING_CC_WHATEVER_ITS_PREDEF_IS
#include <bool.h>
#endif
#include <iostream>
using namespace std;


class LinkedList
{
private:

  struct node
  {
	 char c;
	//c = "c";
     int info;
     node * next;
  };

  typedef node * nodeptr;

  nodeptr start;

  int count;

//\end{verbatim}  \lecpb  \begin{verbatim}

public:

       // Constructor

   LinkedList()
   {
      start = NULL;
      count = 0;
   }

       // Destructor

   ~LinkedList()
   {
      nodeptr p = start, n;

      while (p != NULL)
      {
         n = p;
         p = p->next;
         delete n;
      }
   }

    // Add a node onto the front of the linked list.

   void AddNode(char x);

    // Delete the first node found with the value x, if one exists.

   void DeleteNode(char x);

    // Return the first node found in the list

   int FirstNode();

    // Output the values in the nodes, one integer per line.

   void PrintNodes();

    // Return true if there in a node in the list with the value x.

   //bool IsInList(char x);
   int IsInList(char x);

    // Return a count of the number of nodes in the list.

   int Size();
};

#endif
