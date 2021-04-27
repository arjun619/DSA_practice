def findTwoElement( self,arr, n): 
        # code here
        freq=[0]*(n+1)
        #for i in arr:
        #    freq[i]+=1
        rep=-1
        zer=-1
        for i in range(n):
            #print(arr[i])
            freq[arr[i]]+=1
            #print(freq)
        #print(freq)
        for i in range(1,len(freq)):
            if freq[i]==0:
                zer=i
            elif freq[i]==2:
                rep=i
                #print(i)
            if rep!=-1 and zer!=-1:
                break
        return (rep,zer)
