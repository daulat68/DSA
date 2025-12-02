#include <iostream>
#include <queue>
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


int main(){
    int x, first, second;
    cin>>x;
    queue<Node*> q;
    Node* root = new Node(x);
    q.push(root);
    while(!q.empty()){
        Node *current = q.front();
        q.pop();
        cout<<"Enter left child of "<<current->data<<": ";
        cin>>first;
        if (first != -1){
            current->left = new Node(first);
            q.push(current->left);
        }
        cout<<"Enter right child of "<<current->data<<": ";
        cin>>second;
        if (second != -1){
            current->right = new Node(second);
            q.push(current->right);
        }
    }
}