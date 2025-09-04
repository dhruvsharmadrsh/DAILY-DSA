class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i-1]){
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};