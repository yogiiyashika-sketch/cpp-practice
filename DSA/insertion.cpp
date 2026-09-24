#include <iostream>
using namespace std;

int main()
{
    const int capacity = 100;
    int arr[capacity], n, num, i, position, choice;

    cout << "Enter the number of elements in array: ";
    cin >> n;

    if (n < 0 || n >= capacity)
    {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nChoose Operation:\n";
    cout << "1. Insert at the Start\n";
    cout << "2. Insert at the End\n";
    cout << "3. Insert at the Given Position\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter element to insert: ";
            cin >> num;

            if (n >= capacity)
            {
                cout << "Array is full!" << endl;
                return 0;
            }

            for (i = n; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[0] = num;
            n++;
            break;

        case 2:
            cout << "Enter element to insert: ";
            cin >> num;

            if (n >= capacity)
            {
                cout << "Array is full!" << endl;
                return 0;
            }

            arr[n] = num;
            n++;
            break;

        case 3:
            cout << "Enter position (1 to " << n + 1 << "): ";
            cin >> position;

            if (position < 1 || position > n + 1)
            {
                cout << "Invalid Position!" << endl;
                return 0;
            }

            cout << "Enter element to insert: ";
            cin >> num;

            if (n >= capacity)
            {
                cout << "Array is full!" << endl;
                return 0;
            }

            for (i = n; i >= position; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[position - 1] = num;
            n++;
            break;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "\nElements after insertion: ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}