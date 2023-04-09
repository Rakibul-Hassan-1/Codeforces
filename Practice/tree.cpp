#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left_child;
    struct Node *right_child;
    Node(int value) // creating a constractor
    {
        data = value;
        right_child = NULL;
        left_child = NULL;
    }
};
void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left_child);
    preorder(root->right_child);
}
void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left_child);
    cout << root->data << " ";
    inorder(root->right_child);
}

void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left_child);
    postorder(root->right_child);
    cout << root->data << " ";
}

int main()
{
    struct Node *root = new Node(1);
    root->left_child = new Node(2);
    root->right_child = new Node(3);
    root->left_child->left_child = new Node(4);
    root->left_child->right_child = new Node(5);
    root->right_child->left_child = new Node(6);
    root->right_child->right_child = new Node(7);
    cout << "Pre-Order: " << endl;
    preorder(root);
    cout << endl;
    cout << "In-Order: " << endl;
    inorder(root);
    cout << endl;
    cout << "Post-Order: " << endl;
    postorder(root);
}