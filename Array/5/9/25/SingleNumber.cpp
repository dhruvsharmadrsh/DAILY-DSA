// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int n=arr.size();
        int xor1=0;
        for(int i=0;i<n;i++){
            xor1=xor1^arr[i];
        }
        return xor1;
    }
};