#include <iostream>
using namespace std;

#define bool int

class node {
    public:
        int item;
        node *left;
        node *right;
};

// Create anew node
node *newNode(int item) {
    node *Node = new node();
    Node->item = item;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

// Check height balance
bool checkHeightBalance(node *root, int *height) {
    // Check for emptiness
    int leftHeight = 0, rightHeight = 0;

    int l = 0, r = 0;

    if (root == NULL) {
        *height = 0;
        return 1;
    }

    l = checkHeightBalance(root->left, &leftHeight);
    r = checkHeightBalance(root->right, &rightHeight);

    cout<<"l: "<<l<<" ||  r: "<<r<<endl;
    cout<<"leftHeight: "<<leftHeight<<" || rightHeight: "<<rightHeight<<endl;

    *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

    cout<<"height of this place"<<*height<<endl<<endl;

    if ((leftHeight - rightHeight >= 2) || (rightHeight - leftHeight >= 2))
        return 0;

    else
        return l && r;

    cout<<"bottom \n value of l: "<<l<<" || value of r: "<<r<<endl;
    cout<<"value of leftHeight: "<<leftHeight<<" || value of rightHeight: "<<rightHeight<<endl;
}

int main() {
    int height = 0;

    node *root = newNode(1);
    root->left = newNode(2);
    //root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    if (checkHeightBalance(root, &height))
        cout << "The tree is balanced";
    else
        cout << "The tree is not balanced";
}
