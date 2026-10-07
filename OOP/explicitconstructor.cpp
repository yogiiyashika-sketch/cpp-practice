#include <iostream>
using namespace std;

class Number
{
int n;

public:

explicit Number(int x)
{
n = x;
}

void display()
{
cout << "Number = " << n << endl;
}
};

int main()
{
Number n1(200);

n1.display();


return 0;
}
