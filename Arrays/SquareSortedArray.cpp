//

//----------My Solution----------- O(N)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int len=nums.size();
        int k=len-1;
        vector<int> res(nums.size());
        int i;
        int l=0;
        int r=nums.size()-1;
        
        while(l<=r)
        {
            if(abs(nums[l])>=abs(nums[r]))
            {
                res[k]=abs(nums[l]*nums[l]);
                l++;
                k--;
            }
            else
            {
                res[k]=abs(nums[r]*nums[r]);
                r--;
                k--;
            }
        }
        return res;
    }
};

//-----------Optimized Solution(Few Lines)-------------O(N)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l])) res[k] = A[r] * A[r--];
            else res[k] = A[l] * A[l++];
        }
        return res;
    }
};

