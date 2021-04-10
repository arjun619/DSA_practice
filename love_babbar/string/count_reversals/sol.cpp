int countRev (string s)
{
    // your code here
    stack<char>mystack;
    if (s.length()%2!=0)
        return -1;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='{')mystack.push(s[i]);
        else if (s[i]=='}' && !mystack.empty())
        {
            if (mystack.top()=='{')mystack.pop();
            else
            mystack.push(s[i]);
        }
        
        else
        mystack.push('}');
    }
    int n=0,m=0;
    while(!mystack.empty())
    {
        if (mystack.top()=='{')n++;
        else 
        m++;
        mystack.pop();
    }
    //cout<<n<<m;
    n=ceil(float(n)/2);
    m=ceil(float(m)/2);
    return n+m;
}
