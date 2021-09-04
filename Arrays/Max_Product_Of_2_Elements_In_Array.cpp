//

//O(N)

class Solution {
public:
     long int maxProduct(vector<int>& nums) {
       
        int i,a,b;
        long int res;
        int max1=0;
        int max2=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>=max1)
            {
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>=max2)
            {
                max2=nums[i];
            }
        }
        res=(max1-1)*(max2-1);
        return res;
        
        
        
        /*sort(nums.begin(),nums.end());
        int len=nums.size();
        int a=nums[len-2];
        int b=nums[len-1];
        int res=(a-1)*(b-1);
        return res;*/
    }
};


//------METHOD 02------- 
//      O(nlogn)
  
 class Solution {
public:
     long int maxProduct(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int a=nums[len-2];
        int b=nums[len-1];
        int res=(a-1)*(b-1);
        return res;
    }
};
  
