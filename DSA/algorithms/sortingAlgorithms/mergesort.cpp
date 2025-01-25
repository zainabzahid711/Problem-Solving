#include<iostream>
using namespace std;

//--------merge sort using arrays
void Merge(int arr[], int left, int mid, int right){
    //------set the size 
    int arr1 = mid - left + 1;
    int arr2 =  right - mid  ; //h.value - (l.vaue+1) +1 
    //------creat two temporary arrays
    int *L = new int[arr1];
    int *R = new int[arr2];
    //------copy the elemnts from orignal arrays
    for(int i=0; i<arr1; i++){
        L[i] = arr[left+i]  ;
    }
    for(int j=0; j<arr2; j++){
        R[j] = arr[mid+1+j] ;
    }
    //-----set indxes
    int i=0, j=0;
    int k=left;
    //comparison for sorting
    while(i<arr1 && j<arr2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // if any elemnets are remaining
    while(i<arr1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<arr2){
        arr[k] = R[j];
        j++;
        k++;
    }
    //free memory of temporary arrays
    delete[]L;
    delete[]R;
}
void mergSort(int arr[], int left, int right){
    //divide the aray until single single element is left
    if(left < right){
    int mid = left + (right-left)/2;  
    mergSort(arr,left,mid); //left aray
    mergSort(arr, mid+1,right); //right array
    
    Merge(arr,left,mid,right); //merge
    }
}
void printArry(int arr[], int size){
    cout<<"your sorted array is _";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int size;
    cout<<"enter the size of array _";
    cin>>size;
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cout<<"enter element _";
        cin>>arr[i];
    }

    mergSort(arr,0,size-1);
    printArry(arr, size);
    return 0;
}


