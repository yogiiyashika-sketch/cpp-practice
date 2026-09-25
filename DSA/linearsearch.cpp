#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
for( int i=0;i<n;i++)
{
if(arr[i]==key)
{
return i;
}
}
return -1;

}
int main()
{
int arr[]={10,20,30,40,50,60,70,80,90};
int n= sizeof(arr)/sizeof(arr[0]);
int key=40;
int i=linearsearch(arr,n,key);
if(i==-1)
{
cout<<"element not found";
}
else{
cout<<"element found at the index: "<<i;
}
return 0;
}
