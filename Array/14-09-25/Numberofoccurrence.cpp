class Solution {
public:
    unordered_map<int,int> freq;
    
    void preprocess(vector<int>& arr) {
        for (int num : arr) freq[num]++;
    }

    int countOccurrences(int x) {
        return freq[x]; 
    }
};
