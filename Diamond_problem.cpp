#include <iostream>
using namespace std;
int count = 0;
int rcount = 0;

class stack
{
protected:
    int arr[100];
    int top = -1;

    void push(int val)
    {
        if (top == 99)
        {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++top] = val;
        count++;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
        rcount++;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class undostack : public stack
{
protected:
    void undo()
    {
        pop();
    }
};

class redostack : public stack
{
protected:
    void redo()
    {
        pop();
    }
};

class logger_stack : public undostack, public redostack
{
    void print()
    {
        cout << "Total call of push function : " << count << endl;
        cout << "Total call of pop function : " << rcount << endl;
    }
};

int main()
{
    
}