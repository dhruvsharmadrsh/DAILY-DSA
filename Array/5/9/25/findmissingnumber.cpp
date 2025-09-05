int missingNumber(vector<int>&arr, int N) {
    // Write your code here.

    int n=N-1;
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;

    return xor1^xor2;
}