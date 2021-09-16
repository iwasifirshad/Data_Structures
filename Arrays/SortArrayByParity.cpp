//https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len=nums.size();
        int p=0;
        int q=len-1;
        int temp=0;
        
        while(p<q)
        {
            while(nums[p]%2==0 && p<q)
              p++;
            
            while(nums[q]%2!=0 && p<q)
                q--;
            
            temp=nums[p];
            nums[p]=nums[q];
            nums[q]=temp;
        }
        
        return nums;
    }
};
