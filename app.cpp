#include <iostream>
using namespace std;

class QueueLinked
{
private:
    struct Node
    {
        int item;
        Node* next;
    };

    Node* front;
    Node* rear;

public:
    QueueLinked()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int value)
    {
        Node* newNode = new Node;
        newNode->item = value;
        newNode->next = NULL;

        if (isEmpty())
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* x = front;
        front = front->next;

        if (front == NULL)
        {
            rear = NULL;
        }

        delete x;
    }

    void print()
    {
        Node* x = front;
        while (x != NULL)
        {
            cout << x->item << endl;
            x = x->next;
        }
    }

    int getFront()
    {
        return front->item;
    }

    bool isEmpty()
    {
        return front == NULL;
    }
};

int main()
{
    QueueLinked queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);

    cout << "Queue before dequeue:" << endl;
    queue.print();

    queue.dequeue();

    cout << "Queue after dequeue:" << endl;
    queue.print();

    return 0;
}


