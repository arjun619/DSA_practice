a="happy"
arr=[a[0]]
count=1
temp=[]
while count!=len(a):
    for i in arr:
        pos=len(i)+1
        val=[t for t in i]
        temper=[]
        for j in range(pos):
            val.insert(j,a[count])
            temper.append(''.join(val))
            val=[t for t in i]
        temp.append(temper)
    arr=[]
    for t in temp:
        for k in t:
            arr.append(k)
    count+=1
    temp=[]
    #print(temper)

print(len(arr))
        
        
