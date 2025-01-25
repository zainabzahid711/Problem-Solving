#include<iostream>
using namespace std;
 

 //----------------------bubble sort----------------
void bble_sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int pass = 0; // use for break extra passes
        for(int j=0; j<size-1-i; j++){ //or (int j=0; j<size-1; j++)
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                pass = 1;
            }
        }
        if(pass == 0){
            break; // break the loop after sorting is done no extra passes be done
        }
    }
}
void print(int arr[], int size){
    cout<<"your array is _"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array _";
    cin>>n;
    int *array = new int[n];
    for(int i=0; i<n; i++){
    cout<<"enter array"<<"["<<i<<"] _"<<endl;
    cin>>array[i];
    }
    bble_sort(array,n);
    print(array,n);
}