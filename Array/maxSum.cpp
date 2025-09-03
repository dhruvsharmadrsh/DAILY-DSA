#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void maxSum(int arr[],int n){
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int currSum=0;
            for(int i=st;i<=end;i++){
                currSum+=arr[i];
            }
            maxSum=max(maxSum,currSum);
        }
    }
    cout << "MAXSUM OF ALL Sub ARRAY IS "<<maxSum;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    maxSum(arr,n);
    return 0;
}