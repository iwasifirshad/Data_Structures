void SortedStack :: sort()
{
   //Your code here
  stack<int> stk;
  while(!s.empty())
  {
    int x = s.top();
    s.pop();
    while(!stk.empty() && stk.top()>x)
    {
        s.push(stk.top());
        stk.pop();
    }
    stk.push(x);
  }
  while(!stk.empty())
  {
      cout<<stk.top()<<" "<<endl;
  }
}
