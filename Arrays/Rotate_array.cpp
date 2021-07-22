//Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

#include <bits/stdc++.h>
using namespace std;
int main()
 {
      int t,i,j,n,len,k=0,d,temp,inTemp;
	 vector<int> v;
	cin>>t;
	for(j=0;j<t;j++)
	{
	    cin>>n;
	    cin>>d;
	    for(i=0;i<n;i++)
	    {   
	        cin>>inTemp;
	        v.push_back(inTemp);
	    }
	    for(i = 0 ; i < d ; i++){
	       temp = v[i];
	       v.push_back(temp);
	    }
	    v = std::vector<int>(v.begin() + d, v.end());
	    for(i=0;i<n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<"\n";
	    v.clear();
	}
	return 0;
	return 0;
}
