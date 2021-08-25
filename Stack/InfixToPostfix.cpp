// C++ implementation to convert infix expression to postfix

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int precedence(char a){
        if(a == '^'){
            return 4;
        }
        else if(a == '*' || a == '/'){
            return 3;
        }
        else if(a =='+' || a == '-'){
            return 2;
        }
        else if(a == '('){
            return 1; 
        }
    }

string infixToPostfix(string s)
    {
        string res = ""; 
        
        stack<char> st; 
        for(int i = 0; i < s.length(); i++)
        {
            if(isalnum(s[i])){
                res += s[i]; 
            }
            else{
                
                if(st.empty()){
                    st.push(s[i]);
                }
                else{
                    
                    if(s[i] == '('){
                        st.push(s[i]);
                    }
                    
                    else if(s[i] == ')')
                    {
                        while(st.top() != '('){
                            res += st.top(); 
                            st.pop();
                        }
                                                st.pop(); 
                    }
                    
                    else if(precedence(s[i]) > precedence(st.top())){
                        st.push(s[i]); 
                    }
                    else if(precedence(s[i]) <= precedence(st.top())){
                        
                        while(!st.empty() && precedence(s[i]) <= precedence(st.top())){
                            res += st.top(); 
                            st.pop(); 
                        }
                        st.push(s[i]);
                    }
                }
            }
            
        }
        while(!st.empty()){
            res += st.top(); 
            st.pop(); 
        }
        return res; 
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
