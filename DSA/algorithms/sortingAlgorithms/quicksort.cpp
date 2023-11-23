#include<iostream>
using namespace std;

//----------------quickSort using arrays
int Partition(int arr[] , int left, int right){
    //------set indexs
    int l = left , r = right ;
    int pi = right; //select right most as pivot
    while(l<r){
        while(arr[l]<=pi){
            l++;
        }
        while(arr[r]>pi){
            r--;
        }
        if(l<r){
            swap(arr[l],arr[r]);
        }
    }
    swap(arr[r],arr[pi]);
    return r;

}
void quickSort(int arr[] , int left, int right){

    if(left < right){
    int pivot = Partition(arr, left, right);
    
    //recursive call
    quickSort(arr, left, pivot-1);
    quickSort(arr, pivot+1, right);
    }
}
void printArray(int arr[], int size){
    cout<<"sorted array _";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"enter size of array _";
    cin>>size;
    int *array = new int [size]; 
    for(int i=0; i<size; i++){
        cout<<"enter arrayy _";
        cin>>array[i];
    }
    quickSort(array, 0, size-1);
    printArray(array, size);
}