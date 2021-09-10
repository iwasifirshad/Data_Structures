//https://leetcode.com/problems/goal-parser-interpretation/

class Solution {
public:
    string interpret(string command) {
        string str;
        int len=command.size();
        for(int i=0;i<len;i++)
        {
            if(command[i]=='G')
                str+='G';
            else if(command[i]=='(' && command[i+1]==')')
            {
                str+='o';
                i++;
            }
               
            else if(command[i]=='(' && command[i+1]=='a')
            {
                str+='a';
                str+='l';
                i+=3;
            }
        }
        return str;
        
    }
};
