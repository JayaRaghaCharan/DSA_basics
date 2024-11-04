#include<iostream>

using namespace std;


class StackImp
{
    int ind = -1;
    int st_array[10];

    public:

        void push(int x)
        {
            ind = ind+1;

            if(ind >= 10)
            {
                cout<<"Stack Capacity Exceeded !!!\n";
                return;
            }

            st_array[ind] = x;
            return;
        }

        void pop()
        {
            if(ind == -1)
            {
                cout<<"Invalid Operation , Stack is Empty !!!\n";
                return;
            }

            ind = ind-1;
            return;
        }

        int size()
        {
            return ind+1;
        }

        int top()
        {
            return st_array[ind];
        }

};


int main()
{
    StackImp st;

    st.push(3);
    st.push(2);
    st.push(1);
    cout<<"Top Element : "<<st.top()<<"\n";
    st.pop();
    st.push(4);
    cout<<"Top Element : "<<st.top()<<"\n";
    cout<<"Size of the stack : "<<st.size()<<"\n";
}