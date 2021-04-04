class Solution(object):
    def reverseString(self, s):
        n=len(s)
        i=0
        j=n-1
        #s=[i for i in s]
        while i<j:
            s[i],s[j]=s[j],s[i]
            i+=1
            j-=1
                          
        
        
        
