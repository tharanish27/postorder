#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
typedef struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Function to create a new tree node
TreeNode* createNode(int value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform post-order traversal
void postOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    // Traverse the left subtree
    postOrderTraversal(root->left);
    
    // Traverse the right subtree
    postOrderTraversal(root->right);
    
    // Visit the root node
    printf("%d ", root->value);
}

// Main function to demonstrate the traversal
int main() {
    // Create a simple binary tree
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
    // Perform post-order traversal
    printf("Post-order traversal of the binary tree:\n");
    postOrderTraversal(root);
    
    printf("\n");
    
    // Free allocated memory (not shown here for simplicity)
    // Implement proper cleanup in real code

    return 0;
}
