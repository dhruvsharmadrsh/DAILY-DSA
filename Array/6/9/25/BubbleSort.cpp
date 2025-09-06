#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        bool swaped=true;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=1;
            }
        }
        if(swaped==0){
            break;
        }
    }
}

void ReverseBubbleSort(int *arr,int n){
    for(int i=1;i<n;i++){
        bool swaped=0;
        for(int j=n-1;j>=i;j--){
            if(arr[j] <arr[j-1]){
                swap(arr[j],arr[j-1]);
                swaped=1;
            }
        }
        if(!swaped){
            break;
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
    // BubbleSort(arr,n);
    ReverseBubbleSort(arr,n);
    printArr(arr,n);
    return 0;
}