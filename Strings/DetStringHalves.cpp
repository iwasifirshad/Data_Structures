//https://leetcode.com/problems/determine-if-string-halves-are-alike/

class Solution {
public:
    bool halvesAreAlike(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int len,mid,a=0,b,p;
        int count=0, count1=0;
        len=s.size();
        mid=len/2;
        p=mid;
        
        while(a<mid)
        {
            if(s[a]=='a' || s[a]=='e' || s[a]=='i' || s[a]=='o' || s[a]=='u')
                count++;
            a++;
        }
        
        while(p<len)
        {
            if(s[p]=='a' || s[p]=='e' || s[p]=='i' || s[p]=='o' || s[p]=='u')
                count1++;
            p++;
        }
        
        if(count==count1)
            return true;
        else
            return false;
        
    }
};
