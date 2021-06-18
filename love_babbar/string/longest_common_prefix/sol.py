import sys
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        minn=sys.maxsize
        for i in strs:
            if len(i)<minn:
                minn=len(i)
        j=0
        cnt=0
        flag=0
        while j<minn:
            for i in range(1,len(strs)):
                if strs[i][j]==strs[i-1][j]:
                    continue
                else:
                    flag=1
                    break
            if flag==1:
                return strs[0][:cnt]
            else:
                cnt+=1
                j+=1
        return strs[0][:cnt]
                    
            
                
            
        
