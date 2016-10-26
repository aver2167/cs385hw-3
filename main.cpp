#include<iostream>
#include <string>

#include "link.cpp"
#include "stack.cpp"

using namespace std;

int main()
{
  Stack s;
  string to_reverse;
  int i;
  
  puts("Enter string (no spaces) to reverse: \n");
  cin >> to_reverse;

  for(i=0;i<=to_reverse.length();i++)
  {
    s.Push(to_reverse[i]);
  }
  while(!s.IsEmpty())
  {
    cout << s.Pop();
  }
  
  cout << "\n";
}
