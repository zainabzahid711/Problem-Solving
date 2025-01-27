#include<iostream>
using namespace std;

// --------------------------circular singaly linked list--------------------
class Node{
    int data;
    Node *next;
    public:
    Node(){};
    Node(int Data){
        data = Data;
    }
    
    friend class crcle;
};
class crcle{
    Node *head;
    public:
    crcle(){
        head = NULL;
    }
    
    void display(){
       if(head == NULL){
        cout<<"list is empty _";
       }
       else{
        Node *temp = head;
        cout<<"your data ____"<<endl;
        do{
            temp = temp->next;
            cout<<temp->data<<"  ";
        }while(temp != head);
       }
       cout<<endl;
    }
    void insertAthead(int data){
        Node *newNode = new Node;
        if(head == NULL){
           head = newNode;
           newNode->next = head;
           cout<<"enter the value you want to insert _"<<endl;
           cin>>newNode->data;
        }
        else{
            Node *temp = head;
            while(temp->next != head){
                temp = temp->next ;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
            cout<<"enter the value you want to insert _"<<endl;
            cin>>newNode->data;
        }
    }
    void insertAtLast(int data){
        Node *lastNode = new Node;
        if(head == NULL){
            cout<<"enter value to inert at last _";
            cin>>lastNode->data;
            head = lastNode ;
            lastNode->next = head;
        }
        else{
            Node *temp = head;
            cout<<"enter value to insert at last _";
            cin>>lastNode->data;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = lastNode;
            lastNode->next = head;
        }
    }
    void deleteAtHead(int data){
        Node *dlt = head;
        Node *temp = head;
        if(head == NULL){
            cout<<"list is empty deletion not possibe _";
        }
        else{
            if(head->next != head){
                head = NULL;
                // delete head;
            }
            else{
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = head->next;
            head = head->next;
           
            delete(dlt);
            }
        }
    }
    void deleteAtLast(int data){
        Node *lastptr = head;
        if(head==NULL){
            cout<<"list is empty _";
        }
        else{
            if(head->next != head){
                head = NULL;
                delete(head);
            }
            else{
                Node *preptr ;
                while(lastptr->next != head){
                    lastptr = lastptr->next;
                    preptr = lastptr;
                }
                preptr->next = head;
                delete lastptr;
            }
        }
    }
};
int main(){
    crcle cl;
    int d,choice,insert;
     do{
        cout<<"\n MENU"<<endl
            <<"1- for insert at first" <<endl
            <<"2- for insert at last " <<endl
            <<"3- for display "<<endl
            <<"4- for delete at head "<<endl
            <<"5- for delete at last "<<endl
            <<"6- for exit "<<endl ;
        cout<<"enter your choice _";
        cin>>choice;
        switch(choice){
            case 1:
            cl.insertAthead(d);
            break;
            case 2:
            cl.insertAtLast(d);
            break;
            case 3:
            cl.display();
            break;
            case 4:
            cl.deleteAtHead(d);
            break;
            case 5:
            cl.deleteAtLast(d);
            break;
        }
    }while(choice!=6);
    
}