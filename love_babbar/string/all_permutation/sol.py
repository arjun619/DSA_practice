def allpermutations(arr):
    sol=[i for i in arr]
    fin=[arr[0]]
    indx=1
    count=1
    while count!=len(arr):
        pos=count+1
        part=[]
        for i in fin:
            temp=[k for k in i]
            #print(temp)
            val=[]
            for j in range(pos):
                temp.insert(j,arr[count])
                val.append(temp)
                temp=[k for k in i]
            sol.extend(val)
        fin=val
        count+=1
    print(sol)
            
            
                
            
        
    #print(sol)
    
allpermutations("abc")
