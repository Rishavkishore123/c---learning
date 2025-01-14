# include<iostream>
# include <queue>

using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    //constructor

    node(int d){
        this -> data=d;
        this-> left=NULL;
        this -> right= NULL;
    }
};

node* buildTree(node* root){

    cout<< "Enter the data: "<<endl;
    int data;
    cin>>data;

    root= new node(data);

    if(data ==-1){
        return NULL;
    }

    cout<< "Enter the data inserting in left"<< endl;
    root->left=buildTree(root->left);
    cout<< "Enter the data inserting in right"<< endl;
    root->right= buildTree(root->right);

    return root;
}

// void levelOrderTraversal(node* root) {
//     queue <node*> q;
//     q.push(root);

//     while(!q.empty()) {
//         node* temp= q.front();
//         q.pop();

//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//     }
// } this is incomplete... 


void inorderTraversal(node* root){
    if(root==NULL) return ;


    inorderTraversal(root->left);
    cout<< root->data << " ";
    inorderTraversal( root ->right);

}

void preOrder(node* root){
    if(root==NULL) return;

    cout<< root->data << " ";
    preOrder(root ->left);
    preOrder(root -> right);

}

void postOrder(node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root -> right);
    cout << root->data <<" ";

}

int main(){

    node* root=NULL;

    root=buildTree(root);

    return 0;
}