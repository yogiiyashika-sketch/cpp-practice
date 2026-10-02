#include <iostream>
using namespace std;
// An iterative binary function
int binarysearch(int arr[],int low,int high,int x)
{
    while (low<=high)
    {
        int mid =low+(high -low)/2;
        if(arr[mid]==x)
        return mid;
        //if x is greater ,ignore left half
        if(arr[mid]<x)
        low = mid + 1;
        //if x is smaller ignore  right half
        else 
        high = mid-1;
    }
    //element was not present 
    return-1;
}
int main()
{ 
    int arr[]={2,3,4,10,40};
    int n =sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result = binarysearch(arr,0,n-1,x);
    if (result == -1)
        cout << "element is not present in array";
    else
        cout << "element is present at index " << result;
    return 0;
}
