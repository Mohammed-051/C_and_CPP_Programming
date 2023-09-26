#include <bits/stdc++.h>
#include <malloc.h>
using namespace std;

// Function declarations
void push (int x); 
void pop (); 
void peek (); 
void TOP (); 

// Node structure for stack
struct Node {
  int data;
  Node* next;
};

// Initialize top of stack as NULL
Node* top = NULL;

int main ()
{
    int n;
    char u;
    cout << "insert element ? (y/n): ";
    cin >> u;
    if (u == 'y')
    {
        cout << "element: ";
        cin >> n;
        push (n); // Pushes an element to the stack
    }
    cout << "delete top element ? (y/n): ";
    cin >> u;
    if (u =='y')
    {
        pop (); // Pops an element from the stack
    }
    cout << "show top element ? (y/n): ";
    cin >> u;
    if (u =='y')
    {
        peek (); // Shows the top element of the stack
        //TOP(); does the same thing as peek()
    }
    return 0;
}

// Function to add an element to the stack
void push(int data) 
{
    Node* newNode = ((struct Node*)malloc(sizeof(struct Node))); // Create a new node
    newNode->data = data; // Assign data to new node
    newNode->next = top; // Point new node's next to current top of stack
    top = newNode; // Make new node as top of stack
}

// Function to delete an element from the stack
void pop() 
{
    if (top == NULL) 
        cout << "Stack Underflow" << endl; // If stack is empty, print underflow message

    Node* temp = top; // Temporary pointer to hold current top of stack
    top = top->next; // Move top pointer to next node in stack
    free (temp); // Free memory allocated to previous top node
}

// Function to show the top element of the stack
void peek() 
{
    if (top == NULL) 
        cout << "Stack is empty" << endl; // If stack is empty, print message
    else
        cout << top->data << endl; // Print data of top node in stack
}

// Function to show the top element of the stack, same as peek()
void TOP ()
{
    if (top == NULL) 
        cout << "Stack is empty" << endl; // If stack is empty, print message
    else
        cout << top->data << endl; 
}