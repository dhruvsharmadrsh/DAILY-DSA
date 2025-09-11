#include <iostream>
using namespace std;

int searchInsert(int arr[],int n,int key) {
    int low = 0, high= n-1;
    while (low<=high) {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
        high=mid-1;
    }
    return low; 
}

int main() {
    int arr[]={1, 3, 5, 6};
    int n=sizeof(arr)/sizeof(int);

    int key = 5;
    cout<<"Position of "<< key << ": "<<searchInsert(arr, n, key)<<endl;

    return 0;
}
