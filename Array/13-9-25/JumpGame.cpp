// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        int maxIdx=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>maxIdx) return false;
            maxIdx=max(maxIdx,i+arr[i]);
        }
        return true;
    }
};