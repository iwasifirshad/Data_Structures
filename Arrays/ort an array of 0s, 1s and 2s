//Sort an array of 0s, 1s and 2s

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void convertToWave(int *arr, int n){
        
        int i,j,temp=0;
        for(i=0;i<n-1;i+=2)
        {
    
            swap(arr[i],arr[i+1]);
            
        }
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends
