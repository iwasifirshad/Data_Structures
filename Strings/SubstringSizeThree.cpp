//https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,count=0;
        if(s.size()<3)
            return 0;
        
        while(i<(s.size()-2))
        {
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i+2]!=s[i])
                count++; 
            i++;
        }
        return count;
    }
};
