#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value); // Create a new node if root is null
    }

    // Insert in the left or right subtree based on value
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root; // Return the unchanged root node
}

// Function to search for a value in the BST
bool search(Node* root, int value) {
    if (root == nullptr) {
        return false; // Value not found
    }

    if (root->data == value) {
        return true; // Value found
    }

    // Recur in the left or right subtree
    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function to perform in-order traversal of the BST
void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    // Traverse left subtree, visit root, then right subtree
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Main function
int main() {
    Node* root = nullptr;

    // Insert nodes into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    // Display in-order traversal of the BST
    cout << "In-order Traversal of BST: ";
    inOrderTraversal(root);
    cout << endl;

    // Search for a value in the BST
    int searchValue = 40;
    if (search(root, searchValue)) {
        cout << searchValue << " is found in the BST." << endl;
    } else {
        cout << searchValue << " is not found in the BST." << endl;
    }

    return 0;
}
