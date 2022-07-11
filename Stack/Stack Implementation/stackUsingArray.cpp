#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow." << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }
        top--;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(22); // 22
    st.push(43); // 22 43
    st.push(44); // 22 43 44
    // st.push(50);
    // st.push(70);
    // st.push(80);
    cout << st.peek() << endl; // 44
    st.pop();
    cout << st.peek() << endl; // 43
    st.pop();
    st.pop();
    st.pop();
    if (st.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }
    return 0;
}