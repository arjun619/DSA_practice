def findLongestConseqSubseq(self,arr, N):
        #code here
        freq=dict()
        arr=list(set(arr))
        ans=[]
        for i in arr:
            freq[i]=1
        cnt=1   
        maxxer=1
        for i in arr:
            cnt=1
            if i-1 not in freq.keys():
                temp=i+1
                while temp in freq.keys():
                    cnt+=1
                    temp+=1
                    
            maxxer=max(cnt,maxxer)
            
        return maxxer
