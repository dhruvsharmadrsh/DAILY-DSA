#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
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
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main(){

    int arr[1000];
    int n;
    cout<<"enter the size of array";
    cin>>n;

    cout<<"enter the ele in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    InsertionSort(arr,n);
    printArr(arr,n);
    return 0;
}