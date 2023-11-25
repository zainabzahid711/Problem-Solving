#include<iostream>
using namespace std;


//-----------------implementation of Queue using arrays
class Queue{
    private:
    int size = 100;
    int *arr;
    int front;
    int rear;
    public:
    Queue(){
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    void enQueue(int val){
        // check whether queue is full or not
        if(rear == size-1){
            cout<<"queue is overflow/isFull _"<<endl;
        }
        else{
            rear++;
            arr[rear]=val;
        }
        if(front == -1){
            front++;
        }
    }
    void deQueue(int val){
        //check if queue is empty or not 
        if(front == -1 || front > rear){
            cout<<"queue is empty deletion is not possible _"<<endl;
        }
        else{
            front++;
        }
    }
    void display(){
        if(front == -1 || front > rear){
            cout<<"queue is empty nothing to display _";
        }
        else{
            cout<<"your data in queue _";
            for(int i=front; i<=rear; i++){
                //front++;
                cout<<arr[i]<<" ";
                cout<<endl;
            }
            cout<<endl;
        }
    }
};
int main(){
    Queue qe;
    int *array;
    int ch,val;
    do{
    cout<<" MENU \n"
        <<"1- for enqueue/ add in queue _"<<endl
        <<"2- for dequeue/ remove from queue _"<<endl
        <<"3- for display queue _"<<endl
        <<"4- to exit _"<<endl;
        cout<<"enter your choice _";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"enter data to insert in a queue _";
            cin>>val;
            qe.enQueue(val);
            break;
        case 2:
            cout<<"enter data to remove from an array _";
            cin>>val;
            qe.deQueue(val);
            break;
        case 3:
            qe.display();
            break;
        default:
            break;
        }
    }while(ch!=4);
}