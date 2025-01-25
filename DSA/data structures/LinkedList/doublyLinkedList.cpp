#include<iostream>
using namespace std;


//_____________________-doubly linked list-____________________
class Node{
    int data;
    Node *next;
    Node *prev;
    public:
    Node(){}
    Node(int Data){
        data=Data;
    }
    friend class Double;
};
class Double{
    Node *head ;
    public:
    Double(){
        head = NULL;
    }
    void display(){
        if(head == NULL){
            cout<<"list is empty _";
        }
        else{
            cout<<"___________your data in list ____________"<<endl;
            Node *temp = head;
            do{
                cout<<temp->data<<"  ";
                temp = temp->next;
            }while(temp != NULL);
        }
    }
    void insertAtHead(int data){
        Node *newNode = new Node;
        newNode->prev = NULL;
        newNode->next = NULL;
        cout<<"enter value to insert at head_";
        cin>>newNode->data;
        if(head == NULL){
            head = newNode;
        }
        else{
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
        head = newNode;
        }
        display();
    }
    void insertAtLast(int data){
        Node *lastNode = new Node;
        cout<<"enter data to insert at last_";
        cin>>lastNode->data;
        lastNode->next = NULL;
        lastNode->prev = NULL;
        if(head == NULL){
            lastNode = head;
        }
        else{
            Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = lastNode;
            lastNode->prev = temp;
            lastNode = temp;
        }
        display();
    }
    void insertAtMid(int data){
        int pos;
        Node *midNode = new Node;
        midNode->next = NULL;
        midNode->prev = NULL;
        cout<<"enter value to insert at any pos  _";
        cin>>data;
        cout<<"enter position where you want to insert _"<<endl;
        cin>>pos;
        Node *temp = head;
        if(head == NULL){
            midNode = head;
        }
        else if(temp!=NULL){
            int i=1;
            while( i<pos-1 ){
                temp = temp->next;
            i++;
            if(temp == NULL){
                cout<<"can't insert _";
            }
            }
            midNode->data = data; 
            midNode->prev = temp; //connection with traversing ptr
            midNode->next = temp->next; 
                temp->next->prev = midNode;  //for insert at pos
            temp->next = midNode;
        }
        else{
            cout<<"invalid _";
        }
        display();
    }
    void DeleteAtHead(){
        Node *dlt = head;
        if(head == NULL){
            cout<<"list is empty _";
        }
        else{
            head = head->next;
            head->prev = NULL;
            delete(dlt);
        }
        display();
    }
    void DeleteAtLast(){
        if(head == NULL){
            cout<<"list is empty _";
        }
        else{
        Node *lastNode = head;
        while(lastNode->next->next != NULL){
            lastNode = lastNode->next;
        }
        lastNode->next = NULL;
        delete(lastNode);
        }
        display();
    }
    bool searchNode(int value){
        Node *temp = head;
        value = 0;
        cout<<"enter value to search __";
        cin>>value;
        if(head == NULL){
            cout<<"list is empty _";
            return false;
        }
        else{
            while(temp->next != NULL && temp->data != value){
                temp = temp->next;
            }
        if(temp->data == value)
            cout<<"found in list _____"<<endl;
            return true ;
            value ++;
        if(temp->data != value )
            cout<<"ooppss!! value not found _"<<endl;
            return false;
        }
    }
};
int main(){
    Double cl;
    int d,choice,insert,val;
     do{
        cout<<"\n MENU"<<endl
            <<"1- for insert at first" <<endl
            <<"2- for insert at last " <<endl
            <<"3- for insert at any position "<<endl
            <<"4- for delete at head "<<endl 
            <<"5- for delete at last "<<endl
            <<"6- for search ___" <<endl
            <<"7- for display "<<endl
            <<"8- for exit "<<endl ;
        cout<<"enter your choice _";
        cin>>choice;
        switch(choice){
            case 1:
            cl.insertAtHead(d);
            break;
            case 2:
            cl.insertAtLast(d);
            break;
            case 3:
            cl.insertAtMid(d);
            break;
            case 4:
            cl.DeleteAtHead();
            break;
            case 5:
            cl.DeleteAtLast();
            break;
            case 6:
            cl.searchNode(val) ;
            break;
            case 7:
            cl.display();
            break;
            
        }
    }while(choice!=8);
}