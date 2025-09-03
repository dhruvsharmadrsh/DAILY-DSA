#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void maxSum(int *arr,int n){
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        int curSum=0;
        for(int end=st;end<n;end++){
            curSum+=arr[end];
            maxSum=max(curSum,maxSum);
        }
    }
    cout<<"Max SubArray Sum is "<< maxSum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n =sizeof(arr)/sizeof(int);
    maxSum(arr,n);
    return 0;
}