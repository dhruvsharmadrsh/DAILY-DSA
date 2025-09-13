//Count pairs with given sum
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int> um;
        int count=0;
        for(int i=0;i<arr.size();i++){
            
            int second=target-arr[i];
            count+=um[second];
            um[arr[i]]++;
        }
        return count;
    }
};