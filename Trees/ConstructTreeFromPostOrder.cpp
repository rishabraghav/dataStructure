#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
BinaryTreeNode<int>* buildTreeHelper(int *in, int *post, int postS, int postE, int inS, int inE) {
    if(inS > inE) {
        return NULL;
    }
    int rootData = post[postE];
    int rootIndex;
    for(int i = inS; i <= inE; i++) {
        if(rootData == in[i]) {
            rootIndex = i;
        }
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    int LeftInS = inS;
    int LeftInE = rootIndex - 1;
    int RightInS = rootIndex + 1;
    int RightInE = inE;
    int LeftPostS = postS;
    int LeftPostE = LeftPostS + LeftInE - LeftInS;
    int RightPostS = LeftPostE + 1;
    int RightPostE = postE - 1;
    
    root-> left = buildTreeHelper(in, post, LeftPostS, LeftPostE, LeftInS, LeftInE);
    root -> right = buildTreeHelper(in, post, RightPostS, RightPostE, RightInS, RightInE);
    
    return root;
    
}


BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
	return buildTreeHelper(inorder, postorder, 0, postLength - 1, 0, inLength - 1);
}

BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    int size;
    cin >> size;
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> post[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelATNewLine(root);
}