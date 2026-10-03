#include <iostream>
using namespace std;

class Student
{
int rollno;

public:
void setRollno(int r)
{
rollno = r;
}

void display() const
{
cout << "Roll Number: " << rollno << endl;
}
};

int main()
{
Student s;

s.setRollno(401);
s.display();

return 0;
}
