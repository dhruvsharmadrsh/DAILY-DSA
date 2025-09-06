#include<iostream>
using namespace std;

void InsertionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
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
    InsertionSort(arr,n);
    printArr(arr,n);
    return 0;
}