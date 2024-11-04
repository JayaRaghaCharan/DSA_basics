#include<iostream>
using namespace std;



class QImp
{
    int start = -1, end = -1;
    int cap = 3;
    int q_array[3];
    int cnt = 0;

    public:

        void push(int x)
        {
            if(cnt == 0)
            {
                start = 0;
                end = 0;
            }

            else if(cnt == cap)
            {
                cout<<"Queue is FULL !!!\n";
                return;
            }

            else
                end = (end+1)%cap;

            cnt =  cnt+1;
            q_array[end] = x;
            return;
        }

        void pop()
        {
            if(cnt == 1)
            {
                start = -1;
                cnt = -1;
            }

            else if(cnt  == 0)
            {
                cout<<"Queue is EMPTY !!!\n";
                return;
            }

            else
                start = (start+1)%cap;

            cnt =  cnt-1;
            return;
        }

        int front()
        {
            return q_array[start];
        }

        int back()
        {
            return q_array[end];
        }

        int size()
        {
            return cnt;
        }

};


int main()
{
    QImp q;

    q.push(3);
    q.push(2);
    q.push(1);
    q.push(5);
    q.pop();
    cout<<"Front Element : "<<q.front()<<"\n";
    cout<<"Back Eleemnt : "<<q.back()<<"\n";
    cout<<"Queue size : "<<q.size()<<"\n";


}