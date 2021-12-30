#include<iostream>
using namespace std;


//Build a binary tree, where N = 11
/*
           1
         /   \
        2     3
      /   \   / \
     4     5  6  7
    / \   / \
   8  9  10 11

*/
struct Node{
    int key;
    Node* left;
    Node* right;
};

Node* newNode(int key){
    Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

Node* buildTree(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(11);
    return root;
}

/*Print inorder*/
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

/*Print postorder*/
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->key<<" ";
}

/*Print preorder*/
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root = buildTree();
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;
    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    return 0;
}