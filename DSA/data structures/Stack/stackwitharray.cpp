#include<iostream>
using namespace std;


// -------------stack implementation using arrays
class Stack{
    private:
    int top;
    int *arr;
    int size = 100;
    public:
    Stack(){
        top = -1;
        arr = new int [size];
    }
void Push(int value){
    // check whether stack is full or not
    if(top == size-1){
        cout<<"stack overflow/Full _";
    }
    else{
        top++;
        arr[top] = value;
    }
}
void Pop(int value){
    //check if stack is empty or not
    if(top == -1){
        cout<<"stack is underflow/no item _";
    }
    else{
        top--;
        //cout<<"item is popped _" << arr[top];
        
    }
}
void display(){
    if(top>=0){
    for(int i=top; i>=0; i--){
        cout<<arr[i]<<" "<<endl;
        cout<<endl;
    }
    cout<<endl;
    }
    else{
        cout<<"stack is empty _";
    }
}
};
int main(){
    Stack st;
    int *array;
    int choice,val;
    do{
        cout<<"\n MENU"<<endl
            <<"1- to insert an element in stack _" <<endl
            <<"2- to remove element from stack _" <<endl
            <<"3- for display "<<endl
            <<"4- to exit "<<endl;
        cout<<"enter your choice _";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter value to insert in stack _";
            cin>>val;
            st.Push(val);
            break;
            case 2:
            cout<<"enter value to remove from stack _";
            cin>>val;
            st.Pop(val);
            break;
            case 3:
            cout<<"your data in stack _";
            st.display();
            break;
            case 4:
            cout<<"invalid choice _";
            break;
        }
}while(choice!=4);
}