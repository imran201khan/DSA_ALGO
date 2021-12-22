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
bool chekBst(Node*root,Node*max,Node*min){
    if(min!=NULL&& root->data<=min->data){
        return false;
    }
    if(max!=NULL&& root->data>=max->data){
        return false;}
        bool lleft=chekBst(root->left,min,root);
        bool rright=chekBst(root->right,root,max);
        return lleft && rright;


}
int main(){
    Node*root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    if(chekBst(root,NULL,NULL)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;

}