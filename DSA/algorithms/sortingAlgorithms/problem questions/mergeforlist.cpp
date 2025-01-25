#include<iostream>
using namespace std;

//--------merge sort for linked list
class Node{
    public:
    int data;
    Node *next;
};
Node* merge(Node *left, Node *right){
    if(left != NULL){
        return right;
    }
    if(right != NULL){
        return left;
    }
    //dummy node
    Node *node = new Node;
    Node *temp = node;
    while(left != NULL && right != NULL){
        if(left->data <= right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    node = node->next;
    return node;
}
Node* midpoint(Node *head){
    Node *slow;
    Node *fast;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* mergeSort(Node *head){
    //base case
    if(head == NULL && head->next == NULL){
        return head;
    }
    else{
        Node *mid = midpoint(head);
        Node *left = head;
        Node *right = mid->next;
        mid->next = NULL;
    //recursive case
        left = mergeSort(left);
        right = mergeSort(right);
    
    Node *result = merge(left,right); 
    return result;
    }
}

void insertNode(Node *head, int newdata){
    Node *newNode = new Node;
    newNode->data = newdata;
    newNode->next = head;
    head = newNode ;
}
void printList(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node *head = NULL;
    Node *a = NULL;
    // int size,value;
    // cout<<"enter size _";
    // cin>>size;
    insertNode(head,4);
    insertNode(head,7);
    insertNode(head,3);
    insertNode(head,12);
    insertNode(head,9);
    insertNode(head,1);
    
    mergeSort(head);
    cout<<"linked list after sorting _";
    printList(a);
}