#include<iostream>
using namespace std;

struct Node {
    Node* left;
    int data;
    Node* right;
};

Node* root = NULL;

void preorder(Node *root) {        // this root us diff erent from original root becuase it is local varible of preorder
    if(root != NULL){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root) {        // this root us diff erent from original root becuase it is local varible of preorder
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

void postorder(Node *root) {        // this root us diff erent from original root becuase it is local varible of preorder
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}

int main() {
    Node *node1, *node2, *node3, *node4, *node5, *node6, *node7;
    node1 = (Node*)malloc(sizeof(Node));
    node2 = (Node*)malloc(sizeof(Node));
    node3 = (Node*)malloc(sizeof(Node));
    node4 = (Node*)malloc(sizeof(Node));
    node5 = (Node*)malloc(sizeof(Node));
    node6 = (Node*)malloc(sizeof(Node));
    node7 = (Node*)malloc(sizeof(Node));
    node1->data = 1, node2->data = 2,node3->data = 3,node4->data = 4,node5->data = 5,
    node6->data = 6,node7->data = 7, 
    node4->left = node5->left = node6->left = node7->left = NULL ;
    node4->right = node5->right = node6->right = node7->right = NULL ;
    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;
    root = node1;
    cout<<"preorder of tree is : "<<endl;
    preorder(root);
    
    cout<<"inorder of tree is : "<<endl;
    inorder(root);

    cout<<"postorder of tree is : "<<endl;
    postorder(root);
    return 0;
}