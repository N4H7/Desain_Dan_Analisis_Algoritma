#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(NULL), right(NULL) {}
};

void inorder(Node* node) {
    if (node == NULL) return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void preorder(Node* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node* node) {
    if (node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main() {
    
    Node* root = new Node(18);
    root->left = new Node(30);
    root->left->left = new Node(29);
    root->left->right = new Node(32);
    root->right = new Node(33);

    cout << "In-order: ";
    inorder(root);
    cout << endl;

    cout << "Pre-order: ";
    preorder(root);
    cout << endl;

    cout << "Post-order: ";
    postorder(root);
    cout << endl;

    return 0;
}

