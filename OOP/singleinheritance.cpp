#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Class A";
    }
};

class B : public A
{
};

int main()
{
    B obj;
    obj.showA();

    return 0;
}
