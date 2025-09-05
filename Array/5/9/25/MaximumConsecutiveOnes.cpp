class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=0;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1 ){
                cnt1++;
                maxi=max(maxi,cnt1);
                cnt2=0;
            }
            else{
                cnt1=0;
                cnt2++;
                maxi=max(maxi,cnt2);
            }
        }
        return maxi;
    }
};