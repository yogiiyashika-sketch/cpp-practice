#include<iostream>
using namespace std;    
class A{
    public:
    int data=100;
    void display(){
        cout<<data<<endl;
    }
};
class b:public A{
    public:
    int data=200;
    void display(){
        cout<<data<<endl;
    }
};
class c:public b{
    public:
    int data=300;
    void display(){
        cout<<data<<endl;
    }
};
int main()
{
    c obj;
    obj.display();
    obj.A::display();
    obj.b::display();
    return 0;
}