
def threeWayPartition(self, array, a, b):
	    
	    # code here 
	    i=0
	    j=len(array)-1
	    while i<j:
	        if array[i]<a:
	            i+=1
	        elif array[i]>=a and array[j]<a:
	            array[i],array[j]=array[j],array[i]
	        elif array[i]>=a and array[j]>=a:
	            j-=1
	    j=len(array)-1
        while i<j:
            if array[i]<b:
                i+=1
            elif array[i]>=b and array[j]<b:
                array[i],array[j]=array[j],array[i]
                
            elif array[i]>=b and array[j]>=b:
                j-=1
        return array
