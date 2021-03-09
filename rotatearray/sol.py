def rotateArr(A,D,N):
    temp=[]
    for i in range(D):
        temp.append(A[i])
    #print(temp)
    for i in range(N-D):
        A[i]=A[i+D]
    counter=0
    #print(A)
    for j in range((N-D),N):
        A[j]=temp[counter]
        counter+=1
    
    return A

A=[1,2,3,4,5]
rotateArr(A, 3, 5)
print(A)
            
        
