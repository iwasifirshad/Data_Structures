//Given a sorted array containing only 0s and 1s, find the transition point. 

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}


int transitionPoint(int arr[], int n) {
    // code here
    int i;
    if(arr[0]==1)
    {
        return 0;
    }
    if(arr[n-1]==0)
    {
        return -1;
    }
    else
    {
       for(i=0;i<n;i++)
       {
           if(arr[i]==1)
           return i;
       }
    }
}
