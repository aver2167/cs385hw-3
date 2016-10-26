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

	cout << "Would  you like to Push(1), Pop(2), Display(3) or Exit(4) the stack?\n";

	while (1)
	{
		cout << "1:Push, 2:Pop, 3:Display, 4:Exit\nInput: ";
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
				int pop = s.Pop();
				if(!pop){
					cout << "The stack is already empty, nothing to pop.\n";
				}
				else {
					cout << "Popped: " << pop << endl;
				}
				break;
			}
			case 3:
				if(s.IsEmpty()){
					cout << "The stack is empty.\n\n";
				} else {
				 	cout << "The stack contains:\n";
					s.Print();
				}
				 break;
			case 4:
				return 0;
				break;
			default:
				cout << "Please enter correct choice(1-4)!!";
				break;
		}
		cout << "\n";
	}
}
