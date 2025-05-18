#pragma once
class Node
{
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {} 
    // Constructor to initialize the node with a value and a pointer to the next node   
    // The next pointer is initialized to nullptr, indicating that it doesn't point to any other node yet

    Node(const Node& other) : data(other.data), next(other.next) {}
    // Copy constructor to create a new node as a copy of another node
    // This constructor initializes the new node's data and next pointer with the values from the other node
   
    ~Node() {
        // Destructor logic can be added here if needed
        // For example, if the node has dynamically allocated resources, they should be released here
    }
    // Destructor is empty here as we are not dynamically allocating any resources in this class    
    // Destructor is automatically called when the object goes out of scope or is deleted
};