#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include <climits>

bool isBSTHelper(BinaryTreeNode<int>* node, int minKey, int maxKey)
{
   
    if (node == nullptr) {
        return true;
    }
 
    if (node->data < minKey || node->data > maxKey) {
        return false;
    }
 
    
    return isBSTHelper(node->left, minKey, node->data) &&
            isBSTHelper(node->right, node->data, maxKey);
}

bool isBST(BinaryTreeNode<int> *root) {
    
    return isBSTHelper(root, INT_MIN, INT_MAX);
// 	if(root == NULL) {
//         return true;
//     }
    
//     if(root -> left != NULL && root -> left -> data >= root -> data) {
//         return false;
//     }
//     if(root -> right != NULL && root -> right -> data <= root -> data) {
//         return false;
//     }
//     if(!isBST(root -> left) || !isBST(root -> right)) {
//         return false;
//     }
//     return isBST(root -> left) || !isBST(root -> right);
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBST(root) ? "true" : "false");
}