#include "bits/stdc++.h"
using namespace std;
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void zigzag(Node*root){
    if(root==NULL){
        return;
    }
    stack<Node*>currlevel;
    stack<Node*>nextlevel;
    currlevel.push(root);
    bool leftToright=true;
    while(!currlevel.empty()){
        Node*temp=currlevel.top();
        currlevel.pop();
        if(temp){

            cout<<temp->data<<" ";
            if(leftToright){
                if(temp->left){
                    nextlevel.push(temp->left);
                }
                if(temp->right){
                    nextlevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextlevel.push(temp->right);
                }
                if(temp->left){
                    nextlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            leftToright= !leftToright;
            swap(currlevel,nextlevel);
        }
    }
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    zigzag(root);
    cout<<endl;
    return 0;
}