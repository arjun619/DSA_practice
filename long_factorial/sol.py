def largefactorial(n):
    a=[1]
    carry=0
    for i in range(1,n):
        for j in range(len(a)-1,-1,-1):
            temp=(a[j]*i)
            temp=temp+carry
            a[j]=temp%10
            carry=temp//10
        if carry>0:
            if carry>9:
                carry=str(carry)
                carry=[int(l) for l in carry]
                for q in range(len(carry)-1,-1,-1):
                    a.insert(0,carry[q])
            else:
                a.insert(0,carry)
            carry=0
    print(a)

largefactorial(100)
            
                
            
        
