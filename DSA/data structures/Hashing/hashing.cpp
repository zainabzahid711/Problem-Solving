#include<iostream>
using namespace std;


void hashFunction(int key,int size,int *arr){
    int i=0,q=0, loc=0;
    
    do{
        loc=(key%size+i) %size;
        if(arr[loc]==-1){
            arr[loc]=key;
            q=1;
        }
        else{
            i++;
        }

    }while(q==0);
}
void search(int *arr,int size,int key){
    int i=0,q=0,loc=0;
    do{
        loc=(key%size+i)%size;
        if(arr[loc]==-1){
            cout<<"found at index _"<<arr[loc];
            q=1;
        }
        else{
            i++;
        }
    }while(q==0);
}

int main(){
    int size,srch,k;
    cout<<"enter size of an array _";
    cin>>size;
    size=size/2;
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cout<<"enter array element_"<<i+1<<" ";
        cin>>arr[i];
        
    }
    hashFunction(k,size,arr);
    cout<<"enter the number u want to search _";
    cin>>srch;
    search(arr,size,k);
}
