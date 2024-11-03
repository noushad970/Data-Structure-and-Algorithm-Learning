#include <iostream>
using namespace std;
class node{

public:
int data;
node* left;
node* right;
node(int d){
    data=d;
    this->left=NULL;
    this->right=NULL;
}

};
node* buildTree(node* & root){
    cout<<"Enter data:"<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter value of Left of data: "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter value of Right of data: "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void inorder(node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node * root){
    if(root==nullptr){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}
void postorder(node* root){
    cout<<root->data<<" ";
    postorder(root->left);
    postorder(root->right);
}
int main() {
   node* root=NULL;
   buildTree(root);
   cout<<"Preorder travarsal:"<<endl;
    preorder(root);
}