#include <iostream>
using namespace std;

class StackLinked
{
private:
    struct Node
    {
        int item;
        Node* next;
    };

    Node* top;

public:
    StackLinked()
    {
        top = NULL;
    }

    void push(int value)
    {
        Node* newNode = new Node;
        newNode->item = value;
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* x = top;
        top = top->next;
        delete x;
    }

    void print()
    {
        Node* x = top;
        while (x != NULL)
        {
            cout << x->item << endl;
            x = x->next;
        }
    }

    int getTop()
    {
        return top->item;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void search(int value)
    {
        Node* x = top;

        while (x != NULL)
        {
            if (x->item == value)
            {
                cout << value << " is found" << endl;
                return;
            }

            x = x->next;
        }

        cout << value << " is not found" << endl;
    }
};

int main()
{
    StackLinked stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    int value;
    cout << "Enter a number to search: ";
    cin >> value;

    stack.search(value);

    return 0;
}