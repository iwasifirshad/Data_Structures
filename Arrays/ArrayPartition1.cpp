//https://leetcode.com/problems/array-partition-i/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int i,sum=0;
    sort(nums.begin(),nums.end());
        
        for(i=0;i<nums.size();i++)
        {
            sum=sum + min(nums[i],nums[i+1]);
            i++;
        }
        
        return sum;
    }
};
