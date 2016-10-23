#include<iostream>
#include "link.cpp"
#include "stack.cpp"
using namespace std;

/*Colton Hotchkiss
*  Main adapted from http://proprogramming.org/c-program-to-implement-stack-using-linked-list/
*/
int main()
{
	Stack s;
	int choice;
	while (1)
	{
		cout << "Would  you like to Push(1), Pop(2), Display(3) or Exit(4) the stack?\n";
		cout << "1:Push, 2:Pop, 3:Display, 4:Exit\n";
			cin >> choice;
		switch(choice)
		{
			case 1:
			{
				int value;
				cout << "Enter a number to insert: ";
				cin >> value;
				s.Push(value);
				break;
			}
			case 2:
			{
				s.Pop();
				break;
			}
			case 3:
				cout << "The stack contains:\n";
				 s.Print();
				 break;
			case 4:
				return 0;
				break;
			default:
				cout << "Please enter correct choice(1-4)!!";
				break;
		}
	}
}