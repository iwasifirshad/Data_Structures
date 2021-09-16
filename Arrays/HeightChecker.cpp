//https://leetcode.com/problems/height-checker/submissions/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> B=heights;
        int i,count=0;
        // for(i=0;i<heights.size();i++)
        //     B[i]=heights[i];
        
        sort(B.begin(),B.end());
        
        for(i=0;i<B.size();i++)
        {
            if(B[i]!=heights[i])
                count++;
        }
        return count;
    }
};
