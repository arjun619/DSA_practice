def minimumNumberOfSwaps(self,S):
        # code here 
        swaps=0
        cnt=0
        p=0
        forward=[]
        S=[i for i in S]
        for i in range(len(S)):
            if S[i]=='[':
                forward.append(i)
        #print(forward)
        for i in range(len(S)):
            if S[i]=='[':
                p+=1
                cnt+=1
                #print(cnt)
            else:
                cnt-=1
                #print(cnt)
                if cnt<0:
                    S[i],S[forward[p]]=S[forward[p]],S[i]
                    swaps+=forward[p]-i
                    cnt=1
                    p+=1
        return swaps
