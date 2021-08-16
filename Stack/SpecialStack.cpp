//Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. Your task is to complete all the functions, using stack data-Structure.

 stack<int> tmpStack;
  
    while (!input.empty())
    {
        // pop out the first element
        int tmp = input.top();
        input.pop();
  
        // while temporary stack is not empty and top
        // of stack is greater than temp
        while (!tmpStack.empty() && tmpStack.top() > tmp)
        {
            // pop from temporary stack and push
            // it to the input stack
            input.push(tmpStack.top());
            tmpStack.pop();
        }
  
        // push temp in tempory of stack
        tmpStack.push(tmp);
    }
  
    return tmpStack;
