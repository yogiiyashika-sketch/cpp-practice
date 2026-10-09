//Multiple inheritance
#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
    }
};
class B
{
public:
    void display()
    {
        cout << "Class B" << endl;
    }
};
class C : public A, public B
{ 
    public:
    void show() 
    
    {
        A::display(); // Call display() from class A
        B::display(); // Call display() from class B
    }   
};
int main()
{
    C obj;
    obj.show();
    return 0;
}