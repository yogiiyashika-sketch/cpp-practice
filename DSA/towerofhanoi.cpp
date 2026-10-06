#include<iostream>
using namespace std;
void toh(int n,char a,char b,char c)
{
    if(n==0)
        return;
    toh(n-1,a,c,b);
    cout<<"Move disk  "<<n<<" from rod "<<a<<" to rod "<<c<<endl;
    toh(n-1,b,a,c);

}
int main()
{
    int N;
    cout<<"Enter number of disk : ";
    cin>>N;
    toh(N,'A','B','C');
    return 0;

}
