#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		void display()
		{
			cout<<roll<<" ";
		}
};
int main()
{
	student s[3];
	s[0].roll=101;
	s[1].roll=102;
	s[2].roll=103;
	cout<<"Roll numbers are: ";
	for(int i=0;i<3;i++)
	s[i].display();
	return 0;
}
