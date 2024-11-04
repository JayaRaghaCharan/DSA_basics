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


class StackImp
{
    Node* top_node;
    int cnt = 0;
    public:

    void push(int x)
    {
        Node* temp =  new Node(x);

        if(top_node == NULL)
            top_node = temp;

        else
        {
            temp->next = top_node;
            top_node = temp;
        }

        cnt = cnt+1;
        return;

    }

    void pop()
    {
        if(top_node == NULL)
        {
            cout<<"Stack is EMPTY !!!\n";
            return;
        }

        Node* temp = top_node;
        top_node =top_node->next;

        delete temp;
        cnt = cnt-1;

        return;
    }

    int top()
    {
        return top_node->data;
    }

    int size()
    {
        return cnt;
    }
};


int main()
{
    StackImp st;

    st.push(6);
    st.push(4);
    st.push(10);
    st.push(3);
    st.push(1);
    cout<<"Top Element : "<<st.top()<<"\n";
    st.pop();
    st.push(14);
    cout<<"Top Element : "<<st.top()<<"\n";
    cout<<"Size of the stack : "<<st.size()<<"\n";

}

