//https://leetcode.com/problems/maximum-product-of-three-numbers/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1=INT_MAX, min2=INT_MAX;
        int max1=INT_MIN, max2=INT_MIN,max3=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            int val=nums[i];
            if(max1<=val)
            {
                max3=max2;
                max2=max1;
                max1=val;
            }
            else if(max2<=val)
            {
                max3=max2;
                max2=val;
            }
            else if(max3<=val)
            {
                max3=val;
            }
            if(min1>=val)
            {
                min2=min1;
                min1=val;
            }
            else if(min2>=val)
            {
                min2=val;
            }
        }
        int res = max(min1*min2*max1 , max1*max2*max3);
        return res;
    }
};
