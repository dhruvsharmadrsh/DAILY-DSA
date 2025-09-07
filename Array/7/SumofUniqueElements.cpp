class Solution {
public:
    int sumOfUnique(vector<int>& arr) {
        unordered_map<int,int> ump;
        int n=arr.size;
        for(int i=0;i<n;i++){
            ump[arr[i]]++;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(ump[arr[i]]==1){
                sum+=arr[i];
            }
        }
        return sum;
    }
};