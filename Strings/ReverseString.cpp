//

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i, len=0;
        len=s.size();
        char temp;
        for(i=0;i<len/2;i++)
        {
            temp=s[i];
            s[i]=s[len-i-1];
            s[len-i-1]=temp;
        }
    }
};
