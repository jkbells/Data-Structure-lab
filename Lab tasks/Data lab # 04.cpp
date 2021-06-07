// BINARY SEARCH TREE

/*Functions to Implement:


Insertion
Deletion
Preorder Traversal
Inorder Traversal
Postorder Traversal
*/




#include<iostream>
#include<climits>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* searchinBST(Node *root,int key){
    if(root==NULL){
        return root;
    }

    if(root->data == key){
        return root;
    }
    // data > key
    if(root->data > key){
        return searchinBST(root->left,key);
    }
    // data < key
    else{
        return searchinBST(root->right,key);
    }
}

Node* inordersucc(Node *root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

// Delete in BST
Node* deleteinBST(Node* root,int key){

    if(key < root->data){
        root->left = deleteinBST(root->left,key);
    }
    else if(key > root->data){
        root->right = deleteinBST(root->right,key);
    }

    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        // case 3
        Node* temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deleteinBST(root->right,temp->data);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(Node *root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    /*     Binary search Tree
     
               4
              / \
             2   5
            / \   \
           1   3   6
    */
    if(searchinBST(root,10) == NULL){
        cout << "key doesn't exist" << endl;
    }else{
        cout << "key exists" << endl;
    }
    
    root = deleteinBST(root,2);
    inorder(root);
    cout << endl;

    postorder(root);
    cout << endl;

    preorder(root);
    cout << endl;

    return 0;
}





