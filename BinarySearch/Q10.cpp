#include <iostream>

using namespace std;

struct Node
{
   int key;
   Node *left;
   Node *right;
   Node *parent;
};

// Helper function that allocates a new Node 
Node* newNode( int key )
{
   Node* n = new Node;
   n->key = key;
   n->left = nullptr;
   n->right = nullptr;
   n->parent = nullptr;

   return n;
}

//  Given a binary search tree and a number, inserts a new Node with
//  the given number in the correct place in the tree. Returns the new
//  root pointer which the caller should then use 
Node *insert( Node *root, int key )
{
   // 1) If the tree is empty, return a new single Node
   if( root == nullptr )
      return newNode( key );

   Node *temp;

   // 2) Otherwise, recur down the tree
   if( key < root->key )
   {
      temp = insert( root->left, key );
      root->left = temp;
      temp->parent = root;
   } else
   {
      temp = insert( root->right, key );
      root->right = temp;
      temp->parent = root;
   }

   // Return the (unchanged) Node pointer
   return root;
}

// Return a pointer to a Node in the BST by its key.
// Use this fuction when you need a Node to test your 
// findInOrderSuccessor function on
Node *getNodeByKey( Node *root, int key )
{
   Node *currentNode = root;

   while( currentNode )
   {
      if( key == currentNode->key )
         return currentNode;

      if( key < currentNode->key )
         currentNode = currentNode->left;
      else
         currentNode = currentNode->right;
   }

   return nullptr;
}

/*void inorderTraversal( Node* root, Node* inputNode, Node* succ){
    if(root==nullptr){
      return;
    }
  inorderTraversal(root->left, inputNode, succ);
  if(root->data > inputNode->data && !succ->left){
    succ->left=root;
    return;
  }  
  inorderTraversal(root->right, inputNode, succ);  
}*/

Node* findInOrderSuccessor( Node* root, int data )
{
   // your code goes here
  //5 9 11 12 14 20 25
  struct Node* succ=NULL;
  struct Node* current=getNodeByKey(root,data);
  if(current==NULL){
    return NULL;
  }
  //case: 1 node has right subtree
  if(current->right!=NULL){
    struct Node* temp=current->right;
    return temp;
  }
  //case: 2 node doesn't have right subtree 
  else{
    struct Node* ancestor=root;
    while(ancestor!=current){
      if(current->key < ancestor->key){
        succ=ancestor;
        ancestor=ancestor->left;
      }
      else{
        ancestor=ancestor->right;
      }
    } 
  }
  //inorderTraversal(root, inputNode, succ);
  return succ;
}

int main() {
    struct Node *root = NULL, *temp, *succ;
    root = insert(root, 20);
    root = insert(root, 9);
    root = insert(root, 25);
    root = insert(root, 5);
    root = insert(root, 12);
    root = insert(root, 11);
    root = insert(root, 14);
    temp = root->left;
    succ=findInOrderSuccessor(root,9);
    if (succ != NULL)
        cout << "\n Inorder Successor of "
             << temp->key << " is "<< succ->key;
    else
        cout <<"\n Inorder Successor doesn't exit"<<"\n";
  return 0;
}
