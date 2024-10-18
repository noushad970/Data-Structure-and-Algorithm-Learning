#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }   
};
node* buildTree(node* &root){
    cout<<"Enter value: "<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter left value of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter Right value of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelorderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
    node *temp= q.front();
    q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty())
        {
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<< " ";
        if(temp->left){
            q.push(temp->left);
        }
            if(temp->right){
            q.push(temp->right);
        }
    }
    
    }
    

}

int main() {
    node * root=NULL;
    buildTree(root);
    cout<<"Level Order Trivalsal:"<<endl;
    levelorderTraversal(root);
}
//20 10 40 4 -1 76 -1 -1 23 -1 -1 -1 16 22 -1 -1 55 12 -1 -1 10 -1 -1 -1