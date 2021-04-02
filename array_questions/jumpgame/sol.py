def canReach(A, N):
        # code here 
        i=N-2
        curr=1
        flag=1
        while i!=-1:
            if A[i]>=curr:
                flag=1
                curr=1
            elif A[i]<curr:
                flag=0
                curr+=1
            
            i-=1
        return flag

A=list(map(int,input().split()))
N=len(A)
canReach(A,N)
