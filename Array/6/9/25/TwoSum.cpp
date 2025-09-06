string read(int n, vector<int> book, int target)
{
    // Write your code here.

    int left =0;
    int right=n-1;
    sort(book.begin(),book.end());
    while (left<right){
        long long sum=book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if(sum>target){
            right--;
        }
        else left++;
    }
    return "NO";
}
