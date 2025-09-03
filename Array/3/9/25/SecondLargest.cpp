class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
         // ans of code armary
        // int n =arr.size();
        // int ans=-1;
        
        // // largest
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]>ans){
        //         ans=arr[i];
        //     }
        // }
        
        // //second largest 
        // int second=-1;
        
        // for(int i=0;i<n;i++){
        //     if(arr[i]!=ans)
        //     {
        //         second=max(second,arr[i]);
        //     }
        // }
        
        // return second;
        
        
         long long  ans=-1;
        long long n=arr.size();
        long long second=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>ans){
                second=ans;
                ans=arr[i];
                
            }
            else if(arr[i]>second && arr[i]!=ans){
                second=arr[i];
            }
        }
        return second;
        
        
        
        
        
    }
};