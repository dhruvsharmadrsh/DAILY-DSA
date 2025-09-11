#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
        ans = mid;
        high = mid - 1; 
        }
        else if (arr[mid] < key)
        low = mid + 1;
        else
        high = mid - 1;
    }
    return ans;
}

int lastOccurrence(int arr[],int n,int key) {
    int low=0, high=n- 1, ans=-1;
    while (low<=high) {
        int mid=low+(high-low)/2;

        if(arr[mid]==key) {
            ans = mid;
        low=mid+1; 
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high= mid-1;
    }
    return ans;
}

int main() {
    int arr[]={2, 4, 4, 4, 8, 10, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key=4;

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;

    return 0;
}
