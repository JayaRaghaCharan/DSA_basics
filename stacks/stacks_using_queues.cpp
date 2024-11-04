#include<iostream>
#include<queue>

using namespace std;

class StackImp
{
    queue<int> q;

    public:

    void push(int x)
    {
        q.push(x);
        int size =  q.size();
        for(int i = 1; i<size; i++)
        {
            int top_ele =  q.front();
            q.pop();
            q.push(top_ele);
        }
    }

    void pop()
    {
        q.pop();
    }

    int top()
    {
        return q.front();
    }

    int size()
    {
        return q.size();
    }

};

int main()
{
   StackImp st;

    st.push(16);
    st.push(14);
    st.push(101);
    st.push(32);
    st.push(1);
    cout<<"Top Element : "<<st.top()<<"\n";
    st.pop();
    st.push(112);
    st.push(14);
    st.pop();
    st.pop();
    cout<<"Top Element : "<<st.top()<<"\n";
    cout<<"Stack size : "<<st.size()<<"\n";

}