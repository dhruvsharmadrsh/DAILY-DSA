class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=INT_MIN;
        for(int i =0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        
        return largest;
    }
};
