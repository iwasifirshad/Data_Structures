//

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;
        int l=0;
        int h=s.size();
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]=='I')
            {
                res.push_back(l++);
            }
               
            else
            {
              res.push_back(h--);  
            }
        }
        return res;
    }
    
};
