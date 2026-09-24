#include <iostream>
using namespace std;

int main()
{
    int index, i, n, arr[10];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter elements in the array:" << endl;

    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Enter the index to be deleted: ";
    cin >> index;

    if (index < 0 || index >= n)
    {
        cout << "Deletion is not possible!" << endl;
    }
    else
    {
        for (i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "The array after deleting the element: ";

        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
5
    return 0;
}