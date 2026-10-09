
//Deletion Operations in Singly Linked List
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
// Function to create linked list
void createList()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "List cannot be created.\n";
        return;
    }
    Node* newNode;
    Node* temp; //Used to keep track of the last node while creating the list.
    // Create first node
    newNode = new Node;
    cout << "Enter data: ";
    cin >> newNode->data;
    newNode->next = NULL;
    start = newNode;
    temp = start;
    // Create remaining nodes
    for (int i = 2; i <= n; i++)
    {
        newNode = new Node;
        cout << "Enter data: ";
        cin >> newNode->data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }
    cout << "Linked list created successfully.\n";
}
// Function to traverse linked list
void traverse()
{
    if (start == NULL)
    {
        cout << "List is empty.\n";
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
// Function to delete at beginning
void deleteBeginning()
{
    if (start == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = start;
    start = start->next;
    delete temp;
    cout << "Node deleted from beginning.\n";
}
// Function to delete at end
void deleteEnd()
{
    if (start == NULL)
    {
        cout << "List is empty.\n";
        return;
    }
    // If there is only one node
    if (start->next == NULL)
    {
        delete start;
        start = NULL;
        cout << "Node deleted from end.\n";
        return;
    }
    Node* temp = start;
    // Move to second-last node
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    // Delete last node
    delete temp->next;
    // Make second-last node the last node
    temp->next = NULL;
    cout << "Node deleted from end.\n";
}
// Function to delete after a given node
void deleteAfterNode()
{
    int value;
    if (start == NULL)
    {
        cout << "List is empty.\n";
        return;
    }
    cout << "Enter the node value after which you want to delete: ";
    cin >> value;
    Node* temp = start;
    // Search for the given node
    while (temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    // Given node not found
    if (temp == NULL)
    {
        cout << "Node not found.\n";
        return;
    }
    // No node exists after the given node
    if (temp->next == NULL)
    {
        cout << "No node exists after " << value << ".\n";
        return;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
    cout << "Node after " << value << " deleted successfully.\n";
}
// Main function
int main()
{
    createList();

    int choice;

    while (true)
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Traverse Linked List\n";
        cout << "2. Delete at Beginning\n";
        cout << "3. Delete at End\n";
        cout << "4. Delete After a Given Node\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                traverse();
                break;
            case 2:
                deleteBeginning();
                break;
            case 3:
                deleteEnd();
                break;
            case 4:
                deleteAfterNode();
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
