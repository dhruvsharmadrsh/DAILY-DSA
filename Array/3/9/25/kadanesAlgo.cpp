#include<iostream>
#include<climits>
using namespace std;
void maxSubArraySum(int arr[],int n){
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<n;i++){
        curSum=arr[i];
        maxSum=max(maxSum,curSum);
        if(curSum<0){
            curSum=0;
        }
       
    }
     cout<<"Max SubArray Sum is "<< maxSum;
}

int main(){
    int arr[]={-1,-3,-2,-4,-5};
    int n =sizeof(arr)/sizeof(int);
    maxSubArraySum(arr,n);
    return 0;
}