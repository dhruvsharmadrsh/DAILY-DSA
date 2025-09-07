class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        int n=arr.size();
        int idx1=-1;
        int idx2=-2;
        
        // left most 
        for(int i=0;i<n;i++){
            if(arr[i]==num1){
                idx1=i;
                break;
            }
        }
        
        // right one
        for(int i=n-1;i>=0;i--){
            if(arr[i]==num2){
                idx2=i;
                break;
            }
        }
        // no ele found
        if(idx1==-1 || idx2==-1) return 0;
        // 
        if(idx1>=idx2) return 0;
        
        return idx2-idx1-1;
        
        
    }
};