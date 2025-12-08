#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;
        Node(int value){
            this->data = value;
            left=right= nullptr;
        }
};

Node* BinaryTree(){
    int x;
    cin>>x;
    if (x== -1) return nullptr;
    Node *temp= new Node(x);
    cout<<"Enter left child of "<<x<<endl;
    temp->left= BinaryTree();
    cout<<"Enter RIGHT child of "<<x<<endl;
    temp->right= BinaryTree();
    return temp;
}


void inOrder(Node *root){
    if (root==NULL){
        return;
    };
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node *root){
    if (root==NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void preOrder(Node *root){
    if (root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}



int main(){
    cout<<"Enter root value: "<<endl;
    Node* root;
    root= BinaryTree();
    // cout<<root;

    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    preOrder(root);
}
