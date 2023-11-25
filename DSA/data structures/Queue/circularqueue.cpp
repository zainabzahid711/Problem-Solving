#include<iostream>
using namespace std;

//--------------implementation of circular queue using arrays
class Circular{
    private:
    int size = 5;
    int rear,front;
    int *arr;
    public:
    Circular(){
        rear = -1;
        front = -1;
        arr = new int[size];
    }
    void enQueue(int val){
        // check in a circular view if queue is full or not
        if(front == (rear+1)%size ){
            cout<<"queue is overflow/isFull _";
        }
        else{
            rear = (rear+1) % size;
            front++;
            arr[rear] = val;
        }
        display();
    }
    void deQueue(int val){
        // check if queue is empty or not
        if(front == -1 || rear == -1){
            cout<<"queue is underflow/ is Empty _";
        }
        else{
            front = (front+1) % size;
            front++;
        }
    }
    void display(){
        if(front == -1){
            cout<<"queue is empty _";
        }
        else{
            cout<<"_________queue data is __________"<<endl;
            if( front <= rear ){
                while(front <= rear){
                    cout<< arr[front]<<" "<<endl;
                    front++;
                }
            }
            else{
                while(front < size-1){
                    cout<<arr[front]<<" "<<endl;
                    front++;
                }
                cout<<endl;
            }
        }
    }
};
int main(){
   int ch,val;
   Circular cq;
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
            cq.enQueue(val);
            break;
        case 2:
            cout<<"enter data to remove from an array _";
            cin>>val;
            cq.deQueue(val);
            break;
        case 3:
            cq.display();
            break;
        default:
            break;
        }
    }while(ch!=4);
}