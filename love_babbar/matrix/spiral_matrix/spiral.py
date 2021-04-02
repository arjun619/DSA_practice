arr=[[1,2,3,4,5]
    ,[6,7,8,9,10],
     [5,7,2,1,7],
     [4,7,2,1,1]]
dirs=0
top=0
bottom=3
left=0
right=4
while top<=bottom and left<=right:
    if dirs==0:
        for i in range(left,right+1):
            print(arr[top][i],end= " ")
        dirs+=1
        top+=1
    elif dirs==1:
        for i in range(top,bottom+1):
            print(arr[i][right],end= " ")
        right-=1
        dirs+=1
    elif dirs==2:
        for i in range(right,left-1,-1):
            print(arr[bottom][i],end= " ")
        bottom-=1
        dirs+=1
    elif dirs==3:
        for i in range(bottom,top-1,-1):
            print(arr[i][left],end=" ")
        left+=1
        dirs=0
                
        
        

