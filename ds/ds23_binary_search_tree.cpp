#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* createNode() {
    return (Node*)malloc(sizeof(Node));
}

void insertion(Node *&root, int data) {
    Node *tempNode = createNode();
    tempNode->data = data;
    tempNode->left = NULL;
    tempNode->right = NULL;
    if(root == NULL) {
        root = tempNode;
    }
    else {
        Node *ptr = root;
        while(ptr != NULL) {
            if(data < ptr->data) {
                if(ptr->left == NULL) {
                    ptr->left = tempNode;
                    break;
                }
                ptr = ptr->left;
            }
            else if(data > ptr->data) {
                if(ptr->right == NULL) {
                    ptr->right = tempNode;
                    break;
                }
                ptr = ptr->right;
            }
            else {
                cout << "\nSame Data is Not Inserted\n";
                break;
            }
        }
    }
}

Node* findMax(Node *root) {
    if(root->right == NULL) {
        return root;
    }
    return findMax(root->right);
}

Node* deleteData(Node *&root, int data) {
    Node *temp;
    if(root == NULL) {
        cout << "No Such element found\n";
    }
    else if(data < root->data) {
        root->left = deleteData(root->left, data);
    }
    else if(data > root->data) {
        root->right = deleteData(root->right, data);
    }
    else {
        if(root->left && root->right) {
            temp = findMax(root->left);
            root->data = temp->data;
            root->left = deleteData(root->left, root->data);
        }
        else {
            temp = root;
            if(root->left == NULL) {
                root = root->right;
            }
            if(root->right == NULL) {
                root = root->left;
            }
            free(temp);
        }
    }
    return root;
}

void preOrder(Node *root) {
    if(root != NULL) {
        preOrder(root->left);
        cout << root->data << ", ";
        preOrder(root->right);
    }
}
int main() {
    int choice;
    Node *root = NULL;
    do {
        cout << "\n1. Insertion\n";
        cout << "2. Delete\n";
        cout << "3. Show\n";
        cout << "4. Exit\n";
        cout << ">>>Enter Your Choice : ";
        cin >> choice;
        switch (choice) {
            case 1 : {
                int data;
                cout << "Enter a Value : ";
                cin >> data;
                insertion(root, data);
                break;
            }
            case 2 : {
                int data;
                cout << "Enter a Value : ";
                cin >> data;
                // Node *temp = findMax(root);
                // cout << "\nData is : " << temp->data << "\n";
                // break;
                deleteData(root, data);
                break;
            }
            case 3 : {
                preOrder(root);
                break;
            }
            case 4 : {
                exit(1);
            }
            default : {
                cout << "\nWrong Input!!!!!\n";
            }
        }
    }while(choice != 4);
    return 0;
}