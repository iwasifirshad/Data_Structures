//D

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
//int min=INT_MAX;
stack<int> sMin;
int _stack :: getMin()
{
   //Your code here
   if(sMin.empty())
   {
       return -1;
   }
   else
   {
       int ele = sMin.top();
       return ele;
   }
   
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   int ele;
   if(s.empty())
   {
       return -1;
   }
        
   if(s.top()==sMin.top())
   {
       ele=s.top();
       s.pop();
       sMin.pop();
       return ele;
   }
   else
   {
       ele=s.top();
       s.pop();
       return ele;
   }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   //s.push(x);
   if(sMin.empty())
   {
       s.push(x);
       sMin.push(x);
   }
   else
   {
       if(x>sMin.top())
       {
           s.push(x);
       }
       else
       {
           s.push(x);
           sMin.push(x);
       }
   }
}
