//Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        int i;
        unordered_map<int,int> m;
        
        for(i=0;i<size;i++)
            m[a[i]]++;
            
            for(auto x:m)
                if(x.second>(size/2))
                {
                    return x.first;
                }
                
        return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
