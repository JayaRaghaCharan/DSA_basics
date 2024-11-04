#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class QImp
{
    Node* start = NULL;
    Node* end = NULL;
    int cnt = 0;

    public:

    void push(int x)
    {
        Node* temp =  new Node(x);
        

        if(start == NULL)
        {
            start = temp;
            end  =  temp;
        }

        else
        {
            end->next = temp;
            end = temp;
        }

        cnt = cnt+1;
        return;
    }

    void pop()
    {
        if(start == NULL)
        {
            cout<<"Queue is EMPTY !!!\n";
            return;
        }

        else if(cnt == 1)
            end = NULL;

        Node* temp = start;
        start = start->next;

        delete temp;
        cnt = cnt-1;


    }

    int front()
    {
        return (start->data);
    }

    int back()
    {
        return (end->data);
    }

    int size()
    {
        return cnt;
    }

};



int main()
{

    QImp q;

    q.push(6);
    q.push(4);
    cout<<"Front Element : "<<q.front()<<"\n";
    q.push(10);
    q.push(3);
    q.push(1);
    q.pop();
    q.push(14);
    cout<<"Back Element : "<<q.back()<<"\n";
    cout<<"Size of the q : "<<q.size()<<"\n";
}