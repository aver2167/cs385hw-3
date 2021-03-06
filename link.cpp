/*  link.cpp
*Adapted from:
* http://www2.cs.uidaho.edu/~bruceb/cs121/Code/Stack/link.cpp
*  Class for a sorted linked list of integers.
*/

#ifdef NOT_USING_CC_WHATEVER_ITS_PREDEF_IS
#include <bool.h>
#endif
#include <iostream>
#include "link.h"
using namespace std;


//  Add an item to the FRONT of the list
void LinkedList::AddNode(char x)
{
	nodeptr n;

	//  allocate new node
	n = new node;
	n->info = x;
	count++;

	if (start == NULL)
	{
		start = n;
		n->next = NULL;
	}
	else
	{
		nodeptr tmp = start;
		n->next = tmp;
		start = n;
	}
}

//\end{verbatim}  \lecpb  \begin{verbatim}

void LinkedList::DeleteNode(char x)
{
	nodeptr prev, curr;

	curr = start;

	while (curr != NULL && x > curr->info)
	{
		prev = curr;
		curr = curr->next;
	}

	if (x == curr->info)
	{
		if (curr == start)
			start = start->next;
		else
			prev->next = curr->next;

		delete curr;
		count--;
	}
}

//\end{verbatim}  \lecpb  \begin{verbatim}

int LinkedList::FirstNode()
{
	return start->info;
}


void LinkedList::PrintNodes()
{
	nodeptr p = start;

	while (p != NULL)
	{
		cout << p->info << endl;
		p = p->next;
	}

}

//\end{verbatim}  \lecpb  \begin{verbatim}
#ifdef NOT_USING_CC_WHATEVER_ITS_PREDEF_IS
bool LinkedList::IsInList(char x)
#else
int LinkedList::IsInList(char x)
#endif
{
	nodeptr p = start;

	while (p != NULL && x > p->info)
		p = p->next;

	return (x == p->info);
}


int LinkedList::Size()
{
	return count;
}
