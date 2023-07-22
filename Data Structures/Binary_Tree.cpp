#include<iostream>
using namespace std;
#define SPACE 10
class BinTree{
    public:
        int value;
        BinTree* left;
        BinTree* right;

        BinTree(){
            value=0;
            left=NULL;
            right=NULL;

        }

        BinTree(int n){

            value = n;
            left=NULL;
            right=NULL;
        }
};

class BST{
    public:
    BinTree* root;

    bool isEmpty(){
        if (root==NULL)
        return true;
        else return false;
    }

    void insertNode( BinTree* new_node){
        if (root==NULL){
            root = new_node;
            cout<<"Node added as root node ";  
        }
            
        else{
            BinTree* temp = root;
            while(temp!=NULL){
                if (new_node->value==temp->value){
                  return;  
                } 
                
                else if(new_node->value<temp->value && temp->left==NULL) {
                    temp->left==new_node;
                    cout<<"Node added  ";  
                    break;
                }
                else if(new_node->value<temp->value ) {
                    temp=temp->left;
                }
                else if(new_node->value>temp->value && temp->right==NULL) {
                    temp->right==new_node;
                    
                    cout<<"Node added  ";  
                    break;
                }
                else if(new_node->value>temp->value ) {
                    temp=temp->right;
                }


            }
        }
    }

    /*void printTree(BinTree *r, int space){
        if(r==NULL) return;
        space+=SPACE;
        printTree(r->right,space);
        cout<<endl;
        for(int i =SPACE;i<space;i++) cout<<" ";
        cout<<r->value<<endl;
        printTree(r->left,space);

    }*/

    void preOrder(BinTree* r){
        if(r==NULL) return;
        cout<<r->value<<" ";
        preOrder(r->left);
        preOrder(r->right);
    }
    void InOrder(BinTree* r){
        if(r==NULL) return;
        
        preOrder(r->left);
        cout<<r->value<<" ";
        preOrder(r->right);
    }
    void postOrder(BinTree* r){
        if(r==NULL) return;
        
        preOrder(r->left);
        preOrder(r->right);
        cout<<r->value<<" ";
    }
};

int main(){
    int opt,n;
    BST obj;
    do{
        cout<<"Select the option:"<<endl;
        cout<<"1. Insert Node"<<endl;
        cout<<"2. Search Node"<<endl;
        cout<<"3. Delete Node"<<endl;
        cout<<"4. Print BST values"<<endl;
        cout<<"5. Clear Screen"<<endl;
        cout<<"0. Exit"<<endl;
        
        cin>>opt;
        
        BinTree* new_node= new BinTree();

        switch(opt){
            case 0: break;
            case 1: cout<<"Value to be inserted : ";
                    cin>>n;
                    new_node->value=n;
                    obj.insertNode(new_node);
                    break;

            case 4: cout<<"Binary Tree :";
                    //obj.printTree(obj.root,5);
                    obj.preOrder(obj.root);
                    break;
        }
    }while(opt!=0);

    return 0;



}