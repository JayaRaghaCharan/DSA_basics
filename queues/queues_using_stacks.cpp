#include<iostream>
#include<stack>
using namespace std;


class QImp
{
    stack<int> st1;
    stack<int> st2;

    public:

    void push(int x)
    {
        st1.push(x);
    }

    void pop()
    {
        while( !st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }

        st2.pop();

        while( !st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }

    int front()
    {
        while( !st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }

        int ans = st2.top();

        while( !st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }

        return ans;
    }

    int back()
    {
        return st1.top();
    }

    int size()
    {
        return st1.size();
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