#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void maxSubArraySum(int *arr,int n){
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
   cout<<"Max Sum Is "<<maxSum;
}

void maxSubArraySum2(int *arr,int n){
   int maxSum=INT_MIN;
   
   for(int st=0;st<n;st++){
    int currSum=0;
    for(int end=st;end<n;end++){
        
        currSum+=arr[end];
        maxSum=max(maxSum,currSum);
    }
    
   }
   cout<<"Max Sum Is "<<maxSum;
}


int main(){
    int arr[]={4,2,0,3,2,5};
    int n=sizeof(arr)/sizeof(int);

    maxSubArraySum2(arr,n);
    return 0;
}