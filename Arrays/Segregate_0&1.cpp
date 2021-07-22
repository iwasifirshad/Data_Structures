//Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int i=0,temp=0;
        int k=n-1;
        while(i<k)
        {
            while(arr[i]!=1 && i<k)
            {
                i++;
            }
            
            while(arr[k]!=0 && i<k)
            {
                k--;
            }
            
            temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
