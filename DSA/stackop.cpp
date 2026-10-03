#include <iostream>
using namespace std;

int main()
{
    int stack[100];
    int top = -1;
    int size, choice, value;

    cout << "Enter the size of stack: ";
    cin >> size;

    while (true)
    {
        cout << "\n----- STACK MENU -----" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Display Top Element" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Program ended." << endl;
            break;
        }

        switch (choice)
        {
            case 1:
                if (top == size - 1)
                {
                    cout << "Stack Overflow!" << endl;
                }
                else
                {
                    cout << "Enter value to push: ";
                    cin >> value;

                    top++;
                    stack[top] = value;

                    cout << value << " pushed into stack." << endl;
                }
                break;

            case 2:
                if (top == -1)
                {
                    cout << "Stack Underflow!" << endl;
                }
                else
                {
                    cout << stack[top] << " popped from stack." << endl;
                    top--;
                }
                break;

            case 3:
                if (top == -1)
                {
                    cout << "Stack is empty." << endl;
                }
                else
                {
                    cout << "Stack elements are: ";

                    for (int i = top; i >= 0; i--)
                    {
                        cout << stack[i] << " ";
                    }

                    cout << endl;
                }
                break;

            case 4:
                if (top == -1)
                {
                    cout << "Stack is empty." << endl;
                }
                else
                {
                    cout << "Top element is: " << stack[top] << endl;
                }
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}