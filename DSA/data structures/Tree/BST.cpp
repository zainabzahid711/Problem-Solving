#include<iostream>
using namespace std;

class Node{
    private:
    int data;
    Node *left;
    Node *right;
    public:
    Node(){}
    Node(int Data){
        data = Data;
    }
    friend class TREE;
};
class TREE{
    private:
    Node *Root ;
    public:
    TREE(){
        Root = NULL;
    }
    void AddInBst(int data){
        int q=0;
        cout<<"enter element to add _";
        cin>>data;
        Node *newNode = new Node;
        if(Root == NULL){
            Root = newNode;
            Root->left == NULL;
            Root->right == NULL; 
        }
        else{
            Node *rtcpy = Root;
          do{
            if(newNode->data <= rtcpy->data){
                if(rtcpy->left == NULL){
                    rtcpy->left = newNode;
                    q=1;
                }
                else{
                    rtcpy = rtcpy->left;
                }
                q=1;
            }
            else{
                if(rtcpy->right = NULL){
                    rtcpy->right = newNode;
                    q=1;
                }
                else{
                    rtcpy = rtcpy->right;
                }
            }
        }while(q==0);
        }
    }
     
    bool search(Node *srchptr, int value){
        srchptr = Root;
        if(srchptr == NULL){
            return false;
        }
        
        //recursive call
        else if(srchptr->data >= value){
            return(srchptr->left , value);
        }
        else if(srchptr->data < value){
            return(srchptr->right ,value);
        }
        else{ //if(srchptr->data == value)
            return true;
        }
    }
    void displayBST(Node *ptr){ //inorder trversal
        ptr = Root;
        if(ptr == NULL){
            cout<<"NO tree _";
        }
        else{
            cout<<"tree is ";
        while(ptr != NULL){
            displayBST(ptr->left);
            cout<<ptr->data;
            displayBST(ptr->right);
        }
        //return 0;
        }
    }
};




int main(){
    int val,choice;
    Node *p ;
    TREE n;
    do{
        cout<<" MENU \n"<<endl;
        cout<< "1- for add " << endl
         << "2- display" << endl
         << "3- for search" << endl;
         cout<<"enter your choice _";
         cin>>choice;
         switch(choice){
            case 1:
            n.AddInBst(val);
            break;
            case 2:
            n.displayBST(p);
            break;
            case 3:
            n.search(p, val);
            break;
         }
    }while(choice!=4);
}