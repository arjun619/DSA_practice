def rotator(arr,i,j):
    temp=[]
    for k in range(i,j):
        temp.append(arr[k])
    count=0
    for k in range(i,j):
        arr[k+1]=temp[count]
        count+=1
    return arr
    
def alternator(arr):
    for i in range(len(arr)):
        if i%2==0:
            if arr[i]<0:
                continue
            else:
                for j in range(i+1,len(arr)):
                    if arr[j]<0:
                        temp=arr[j]
                        arr=rotator(arr,i,j)
                        arr[i]=temp
                        break
                        #arr[i],arr[j]=arr[j],arr[i]
            print(arr)
        else:
            if arr[i]>0:
                continue
            else:
                for j in range(i+1,len(arr)):
                    if arr[j]>0:
                        temp=arr[j]
                        arr=rotator(arr,i,j)
                        arr[i]=temp
                        break
            print(arr)
    return arr

arr = [1, 2, 3, -4, -1, 4]
arr1= [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]

print(alternator(arr1))
