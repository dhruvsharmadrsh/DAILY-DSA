#include<iostream>
using namespace std;

    
int reverseBinarySearch(int *arr,int n,int key){
    int st=0;
    int end=n-1;
    int mid;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==key)   return mid;
        else if(arr[mid]<key)  end=mid-1;
        else st=mid+1;
    }
    return -1; 
}

int main(){
    int arr[10000];
    int n;
    cout<<"enter the size of arr: ";
    cin>>n;
    cout<<"enter the ele: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key";
    cin>>key;
    cout<<reverseBinarySearch(arr,n,key);
    return 0;
}