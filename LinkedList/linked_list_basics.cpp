#include<iostream>
using namespace std;


class Node
{
    public:
        int data;
        Node* next;

        Node()
        {
            data = -1;
            next = NULL;
        }

        Node(int data)
        {
            this->data =  data;
            this->next = NULL;
        }

        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
};


class LinkedList
{
    Node* head;
    public:
        
        LinkedList()
        {
            head = NULL;
        }

        void insert(int x)
        {
            Node* node = new Node(x);
            if(head == NULL)
            head = node;

            else{
                Node* it = head;

                while(it->next != NULL)
                    it = it->next;
              
                it->next = node;
            }

            return;
        }

        void erase(int x)
        {
            Node* it = head;
            Node* prev_node = NULL;

            if(it == NULL)
            return;

            else{

                while(it != NULL && it->data != x)
                {
                    prev_node = it;
                    it = it->next;
                }

                if( it == NULL)
                return;

                else
                prev_node->next = it->next;

                return;
            }
        }

        void pop()
        {
            Node* it = head;
            Node* prev_node = NULL;

            if( it == NULL)
            return;

            else{

                while(it->next != NULL)
                {
                    prev_node = it;
                    it = it->next;
                }

                prev_node->next = NULL;
                delete it;
            }
        }

        void printLL()
        {
            Node* it = head;

            while( it != NULL)
            {
                cout<<it->data<<" ";
                it = it->next;
            }
            cout<<endl;
        }

};


int main()
{
    LinkedList LL;

    LL.insert(1);
    LL.insert(2);
    LL.insert(3);
    LL.printLL();

    LL.erase(2);
    LL.printLL();

    LL.pop();
    LL.insert(4);
    LL.printLL();

}