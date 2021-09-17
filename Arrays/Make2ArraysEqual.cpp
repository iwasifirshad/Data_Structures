//https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        int i,flag=0;
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        for(i=0;i<target.size();i++)
        {
            if(arr[i]!=target[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            return false;
        else
            return true;
        
    }
};
