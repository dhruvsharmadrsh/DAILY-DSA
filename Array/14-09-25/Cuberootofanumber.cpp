class Solution {
public:
    int cubeRoot(int x) {
        if (x==0) return 0;
        int left=0, right=x, ans=0;
        
        while (left<=right) {
            long mid = left+(right-left)/2;
            long cube = mid*mid*mid;
            
            if (cube==x)returnmid;
            else if (cube<x) {
                ans = mid;
                left = mid+1;
            } else {
                right=mid-1;
            }
        }
        return ans;
    }
};
