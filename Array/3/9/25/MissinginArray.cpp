class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        
        // array sum
        long long n=arr.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=arr[i];
        }
        
        // Total Summ
        long long sum=(n+1)*(n+2)/2;
        
        return sum-ans;
    }
};