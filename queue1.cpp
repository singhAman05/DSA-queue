#include "bits/stdc++.h"
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;
    int max_size;

public:
    Queue(int def_size = 10)
    {
        arr = new int[def_size];
        front = -1;
        rear = -1;
        size = 0;
        max_size = 0;
    }

    void enqueue(int data)
    {
        if (size == max_size)
        {
            cout << "Queue is Full\n";
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = data;
            rear++;
            size++;
        }
        else
        {
            arr[rear] = data;
            rear++;
            size++;
        }
    }

    void dequeue()
    {
        if (size == 0)
        {
            cout << "Queue is Empty\n";
            return;
        }
        else
        {
        }
    }
};
int main()
{
    return 0;
}