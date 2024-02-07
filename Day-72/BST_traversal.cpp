#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBst(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBst(root->right, data);
    }
    else
    {
        root->left = insertIntoBst(root->left, data);
    }
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

void inOrderRecursive(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderRecursive(root->left);
    cout << root->data << " ";
    inOrderRecursive(root->right);
}

void preOrderRecursive(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderRecursive(root->left);
    preOrderRecursive(root->right);
}

void postOrderRecursive(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderRecursive(root->left);
    postOrderRecursive(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> Q;
    Q.push(root);
    Q.push(NULL);

    while (!Q.empty())
    {
        Node *FrontNode = Q.front();
        Q.pop();

        if (FrontNode == NULL)
        {
            cout << endl;
            if (!Q.empty())
            {
                Q.push(NULL);
            }
        }
        else
        {
            cout << FrontNode->data << " ";
            if (FrontNode->left)
            {
                Q.push(FrontNode->left);
            }
            if (FrontNode->right)
            {
                Q.push(FrontNode->right);
            }
        }
    }
}

int main()
{

    Node *root = NULL;

    cout << "Enter the data to create BST: ";
    takeInput(root);

    cout << endl
         << "Inorder Traversal :";
    inOrderRecursive(root);

    cout << endl
         << "Preorder Traversal : ";
    preOrderRecursive(root);

    cout << endl
         << "Postorder Traversal : ";
    postOrderRecursive(root);

    cout << endl
         << "Level Order Traversal : ";
    levelOrderTraversal(root);
}