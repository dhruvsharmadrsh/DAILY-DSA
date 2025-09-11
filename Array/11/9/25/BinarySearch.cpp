class Solution {
public:
    int search(vector<int>& arr, int key) {
        int n=arr.size();
       int low=0, high=n-1;

    while(low<=high) {
        int mid=low+(high-low)/2;

        if(arr[mid]==key)
            {
                return mid;
            }

        else if(arr[mid]<key){
              low = mid + 1;
        }
          

        else{ 
            high = mid - 1;
        }
    }

    return -1;
    }
};