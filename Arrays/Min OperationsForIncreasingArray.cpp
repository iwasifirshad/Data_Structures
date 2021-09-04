//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i;
        int output=0;
        // if(nums.size()==1)
        //     return 0;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
              continue;  
            }
            else
            {
                output=output+(nums[i]+1-nums[i+1]);
                nums[i+1]=nums[i]+1;
                //output++;
            }
        }
        return output;
    }
};
