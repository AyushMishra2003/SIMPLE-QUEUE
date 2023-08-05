#include<iostream>
using namespace std;
class Queue
{
private:
    int q[100];
    int rear;
    int front;
    int size;
public:
    Queue()
    {
        rear=-1;
        front=-1;
        size=8;
    }
    void Enqueue(int val)
    {
        if(rear==size-1)
            cout<<"OVERFLOW CONDTION"<<endl;
        else
        {
            if(rear==-1)
            {
                rear++;
                front++;
                q[rear]=val;
            }
            else
            {
                q[++rear]=val;
            }
        }
    }
    void Dequeue()
    {
        if(front==-1)
            cout<<"UNDERFLOW CONDTION"<<endl;
        else
        {
            if(front==rear)
            {
                rear--;
                front--;
            }
            else
            {
                front++;
            }
        }
    }
    void Print()
    {
        int i;
        for(i=front;i<=rear;i++)
            cout<<q[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Queue q;
    int choose,data;
    while(1)
    {
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Print "<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"ENTER CHOOSE YOU WANT"<<endl;
        cin>>choose;
        switch(choose)
        {
        case 1:
            cout<<"ENTER DATA YOU WANT"<<endl;
            cin>>data;
            q.Enqueue(data);
            break;

        case 2:
            q.Dequeue();
            break;

        case 3:
            q.Print();
            break;

        case 4:
            cout<<"THANKS YOU HAVE A GREAT DAY"<<endl;
            exit(0);

        default:
            cout<<"INVALID CHOOOSE"<<endl;
        }
    }
    return(0);
}
