#include<iostream>
using namespace std;
#define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
void insert()
{
    int value;
    if(rear== MAX-1)

{
cout<<"queue overflowed!"<<endl;
}
else
{
    cout<<"enter element : ";
    cin>>value;
    if(front == -1)
    {
     front =0;
    }
    rear ++;
    queue[rear]= value;
    cout<<"element inserted successfully"<<endl;
}
}
void deletion()
{
    if(front ==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"Deleted element : "<<queue[front]<<endl;
        if(front == rear)
        {
            front ==-1;
            rear==-1;
        }
        else{
            front ++;
        }
    }
}
    void display()
    {
     if(front ==-1){
            cout<<"queue is empty"<<endl;
     }
     else {
       cout<<"queue elements are :";
       for(int i=front;i<=rear;i++)

       {
        cout<<queue[i]<<" ";
       }
       cout<<endl;
     }
    }
    int main()
    {
        int choice;

        do
        {
            cout<<"\n1.Insert";
            cout<<"\n2. Delete";
            cout<<"\n3.Display";
            cout<<"\n4.Exit"<<endl;
            cout<<"enter choice "<<endl;
        cin>>choice;
            switch(choice)
            {
         case 1:
            insert();
            break;
         case 2:
            deletion();
            break;
         case 3:
            display();
            break;
         case 4:
            cout<<"program ended ";
            break;
         default:
            cout<<"invalid choice";
            }
        }
            while(choice !=4);
                return 0;
    }
