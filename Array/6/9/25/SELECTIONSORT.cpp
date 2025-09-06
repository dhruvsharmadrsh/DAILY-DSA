#include<iostream>
using namespace std;

void SELECTIONSORT(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[idx]){
                idx=j;
            }
        }
        swap(arr[idx],arr[i]);
    }
}


void REVERSE_SELECTIONSORT(int *arr, int n) {
   for (int i=n-1;i>0;i--){
    int idx=0;// assumeing first ele is largest

    for(int j=1;j<=i;j++){
        if(arr[idx]<arr[j]){
            idx=j;
        }
    }
    swap (arr[idx],arr[i]);
   }
}


void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of arr: ";
    cin>>n;
    int arr[10000];
    cout<<"enter the the arr ele: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // SELECTIONSORT(arr,n);
    // printArr(arr,n);

    // HW

    REVERSE_SELECTIONSORT(arr,n);
    printArr(arr,n);
    return 0;
}