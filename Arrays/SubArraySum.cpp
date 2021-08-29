//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

lass Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int i=0,j=0,sum=0,res=0;
        int n=arr.size();
        for(i=0;i<n;i++)
        {
            sum=arr[i];
            res+=sum;
            for(j=i+1;j<n;j++)
            {
                sum+=arr[j];
                if((j-i+1)%2==1)
                {
                    res+=sum;
                }
            }
        }
        return res;
    }
};
