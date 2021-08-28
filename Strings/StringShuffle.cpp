//https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string t=s;
        int i=0;
        for(i=0;i<s.size();i++)
        {
            t[indices[i]]=s[i];
        }
        return t;
    }
};
