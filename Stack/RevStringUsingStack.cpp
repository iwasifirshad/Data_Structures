

char* reverse(char *S, int len)
{
    stack<char> stk;
    //char *c = S;
    // for(;*S!='\0';S++)
    // {
    //     stk.push(*S);
    // }
    // while(!stk.empty())
    // {
    //     cout<<stk.top();
    //     stk.pop();
    // }
    int i;
    for(i=0;i<len;i++)
    {
        stk.push(*S++);
    }
    for(i=0;i<len;i++)
    {
        //cout<<stk.top();
        S[i]=stk.top();
        stk.pop();
    }
    return S;
}
