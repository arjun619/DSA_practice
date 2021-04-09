bool ispar(string x)
{
    // Your code here
    stack<char>mystack;
    int flag=0;
    for(int i=0;i<x.length();i++)
    {
        if (x[i]=='(' || x[i]=='{' || x[i]=='[')mystack.push(x[i]);

        else
        {
            if (mystack.empty())
                {
                    flag=1;
                    break;
                }
            else
            {
            char cur=mystack.top();
            mystack.pop();
            if (x[i]==')' && cur=='(')
                continue;
            else if (x[i]=='}' && cur== '{')
                continue;
            else if (x[i]==']' && cur== '[')
                continue;
            else
            {
                flag=1;
                break;
            }
            }
        }
    }
    if (flag==0 && mystack.empty())
      return true;
    else
        return false;
}
