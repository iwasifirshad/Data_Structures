//https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0,count=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(count==0)
                res++;
            if(s[i]=='R')
                count++;
            if(s[i]=='L')
                count--;
        }
        return res;
    }
};
