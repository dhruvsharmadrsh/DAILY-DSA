class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n=arr.size();
        if (n<=1) return 0;
        if (arr[0]==0) return -1;
        int jump=0;int l=0;int r=0;
        while(r<n-1){
            int longest=0;
            for(int i=l;i<=r;i++){
                longest=max(longest,arr[i]+i);
            }
            if (longest <= r) return -1;
            l=r+1;
            
            r=longest;
            jump++;
        }
        return jump;
    }
};
