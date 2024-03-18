#include <iostream>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }
    if (value < root->val) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

TreeNode* createBSTFromArray(const int arr[], int size) {
    TreeNode* root = nullptr;
    for (int i = 0; i < size; ++i) {
        root = insert(root, arr[i]);
    }
    return root;
}

void inOrderTraversal(TreeNode* root) {
    if (root) {
        inOrderTraversal(root->left);
        std::cout << root->val << " ";
        inOrderTraversal(root->right);
    }
}

bool searchIterative(TreeNode* root, int target) {
    while (root != nullptr) {
        if (root->val == target) {
            return true;
        } else if (target < root->val) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return false;
}

bool searchRecursive(TreeNode* root, int target) {
    if (root == nullptr) {
        return false;
    }
    if (root->val == target) {
        return true;
    }
    if (target < root->val) {
        return searchRecursive(root->left, target);
    } else {
        return searchRecursive(root->right, target);
    }
}

int main() {
    int arr[] = {10, 5, 15, 3, 7, 12, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    TreeNode* root = createBSTFromArray(arr, size);

    std::cout << "In-order traversal of the BST: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    insert(root, 30);
    std::cout << "After adding 30" << std::endl;
    inOrderTraversal(root);
    std::cout << std::endl;

    std::cout << "Searching recursively for node value 15.... FOUND: " << searchRecursive(root, 15) << std::endl;

    std::cout << "Searching iteratively for node value 13.... FOUND: " << searchIterative(root, 13) << std::endl;

    return 0;
}
