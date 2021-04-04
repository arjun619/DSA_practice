class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	   int i=0,j=S.length()-1;
	   int flag=0;
	   while (i<j)
	   {
	       if (S[i]==S[j])
	       {
	        flag=0;   
	       }
	       else
	       {
	                flag=1;
	                break;
	        }
	        i+=1;
	        j-=1;
	   }
	   if (flag==1)
	   return 0;
	   else
	   return 1;
	}

};

