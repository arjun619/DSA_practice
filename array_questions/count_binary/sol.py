def myfunc(arr):
    sol=[]
    counter=0
    for i in arr:
        temp=bin(i).replace("0b", "")
        valler=0
        for k in temp:
            valler+=int(k)
        sol.append(valler)
    myarr=[0]*10000
    for i in range(len(sol)):
        if myarr[sol[i]]==0:
            myarr[sol[i]]+=1
        else:
            counter+=myarr[sol[i]]
            myarr[sol[i]]+=1
    return counter

a=[3,5,1,7,8,10,62,13]
print(myfunc(a))

    
