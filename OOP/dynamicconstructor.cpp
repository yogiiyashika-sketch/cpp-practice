
#include <iostream>
using namespace std;

class Array
{
    int *p;
    int size;

public:
    // Dynamic constructor
    Array(int n)
    {
        size = n;
        p = new int[size];

        cout << "Memory allocated dynamically." << endl;

        for (int i = 0; i < size; i++)
        {
            p[i] = i + 1;
        }
    }

    void display()
    {
        cout << "Array elements: "; 
         for (int i = 0; i < size; i++)
        {
            cout << p[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Array()
    {
        delete[] p;
        cout << "Memory released." << endl;
    }
};

int main()
{
    Array obj(5);

    obj.display();

    return 0;
}
