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
    return nullptr;
}

int main(){
    cout<<"Enter root value: "<<endl;
    Node* root;
    root= BinaryTree();
    cout<<root;
}