class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
       int n=arr.size();
       unordered_map<int,int> ump;

       for(int i=0;i<n;i++){
        ump[arr[i]]++;
       }

       for(int i=0;i<n;i++){
        if(ump[arr[i]]>1){
            return i+1;
        }
       }
       return -1;
    }
};