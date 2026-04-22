#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};

class BinaryTree
{
public:
    TreeNode *root;

    BinaryTree() : root(nullptr) {}

    TreeNode *createNode(int value)
    {
        TreeNode *newNode = new TreeNode();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    void inorder(TreeNode *node)
    {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(TreeNode *node)
    {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(TreeNode *node)
    {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
};

int main()
{
    BinaryTree tree;

    cout << "=== Binary Tree Traversal ===\n";

    // Create tree
    tree.root = tree.createNode(1);
    tree.root->left = tree.createNode(2);
    tree.root->right = tree.createNode(3);
    tree.root->left->left = tree.createNode(4);
    tree.root->left->right = tree.createNode(5);

    cout << "Inorder (Left-Root-Right):   ";
    tree.inorder(tree.root);
    cout << "\n";

    cout << "Preorder (Root-Left-Right):  ";
    tree.preorder(tree.root);
    cout << "\n";

    cout << "Postorder (Left-Right-Root): ";
    tree.postorder(tree.root);
    cout << "\n";

    return 0;
}
