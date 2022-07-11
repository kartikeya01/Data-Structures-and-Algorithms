#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Creating a stack
    stack<int> s;

    // Insert/ push items into the stack
    s.push(1); // 1
    s.push(2); // 1 2
    s.push(3); // 1 2 3

    // Remove/pop item
    s.pop(); // 1 2

    // Printing top element
    cout << "Top Element is: " << s.top() << endl; // 2

    // Check if stack is empty. Ans) Not Empty
    if (s.empty())
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Stack is not Empty." << endl;
    }

    // Print size of stack
    cout << "Size of stack is: " << s.size() << endl; // 2

    return 0;
}