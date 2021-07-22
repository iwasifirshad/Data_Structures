//Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int countZeroes(int arr[], int n) {
        
        // code here

if(arr[n-1] == 1)
return 0;

if(arr[0] == 0)
return n;

int l = 0, h = n-1;

while(l < h){

int mid = (l + h)/2;

if(arr[mid] == 0){
h = mid ;
}
else
l = mid + 1;
}

return n - h;
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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
