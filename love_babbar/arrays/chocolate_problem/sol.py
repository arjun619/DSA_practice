def findMinDiff(A,N,M):

        # code here
        A.sort()
        print(A)
        cur=0
        mins=10000000
        for i in range(N-M+1):
            print(A[i],A[i+M-1])
            cur=A[i+M-1]-A[i]
            print(cur)
            if cur<mins:
                cur=mins
        return mins

arr=[17,83,59,25,38,63,25,1,37]
findMinDiff(arr,len(arr),9)
            
