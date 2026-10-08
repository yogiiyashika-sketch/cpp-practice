#include <iostream>
using namespace std;
// Define a node
struct Node
{
    int data;
    Node* next;
};
// Start pointer
Node* start = NULL;
// Insert at beginning
void insertBeginning()
{
    int value;
    cout << "Enter value: ";
    cin >> value;
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = start;
    start = newNode;
    cout << "Node inserted at beginning.\n";
}

// Insert at end
void insertEnd()
{
    int value;
    cout << "Enter value: ";
    cin >> value;
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    // If list is empty
    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        Node* temp = start;
        // Move to last node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // Connect last node to new node
        temp->next = newNode;
    }
    cout << "Node inserted at end.\n";
}



// Insert after a given node
void insertAfterNode()
{
    int value;
    int afterValue;
    cout << "Enter value to insert: ";
    cin >> value;
    cout << "Enter the node value after which you want to insert: ";
    cin >> afterValue;
    Node* temp = start;
    // Search for the given node
    while (temp != NULL && temp->data != afterValue)
    {
        temp = temp->next;
    }
    // Given node not found
    if (temp == NULL)
    {
        cout << "Node not found.\n";
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    // Connect new node
    newNode->next = temp->next;
    // Connect given node to new node
    temp->next = newNode;

    cout << "Node inserted successfully.\n";
}
// Traverse the linked list
void traverse()
{
    if (start == NULL)
    {
        cout << "Linked list is empty.\n";
        return;
    }
    Node* temp = start;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
// Main function
int main()
{
    int choice;
    while (true)
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert After a Given Node\n";
        cout << "4. Traverse Linked List\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                insertBeginning();
                break;
            case 2:
                insertEnd();
                break;
            case 3:
                insertAfterNode();
                break;
            case 4:
                traverse();
                break;
            case 5:
                cout << "Program ended.\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
    return 0;
}
