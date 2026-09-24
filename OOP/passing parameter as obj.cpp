#include<iostream>
using namespace std;
class student
{
	public:
		int marks;
		void display(student s)
		{
			cout<<"Marks= "<<s.marks;
		}
};
int main()
{
	student s1;
	s1.marks=90;
	s1.display(s1);
	return 0;
}
