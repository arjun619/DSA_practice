def minJumps(self, arr, n):
	    maxr=arr[0]
	    jumps=0
	    steps=arr[0]
	    if arr[0]==0:
	        return -1
	    for i in range(1,n):
	        
	        if i==n-1:
	            return jumps+1
	        maxr= max(maxr,i+arr[i])
	        steps-=1
	        if steps==0:
	            steps=maxr-i
	            jumps+=1
	        if i==maxr:
	            return -1
	    return jumps+1
