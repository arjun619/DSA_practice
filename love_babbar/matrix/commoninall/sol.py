def commonfinder(arr):
    mapper=dict()
    for i in arr[0]:
        mapper[i]=1
    #print(mapper)
    for i in range(1,len(arr)):
        for j in range(0,len(arr[0])):
            if arr[i][j] in mapper.keys():
                mapper[arr[i][j]]+=1
    sol=[]
    #print(mapper)
    for i,j in mapper.items():
        if j>=len(arr):
            sol.append(i)
            
    return sol

mat = [[1, 2, 1, 4, 8],
       [3, 7, 8, 5, 1],
       [8, 7, 7, 3, 1],
       [8, 1, 2, 7, 9]]

print(commonfinder(mat))
