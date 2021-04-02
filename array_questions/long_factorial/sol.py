def largefactorial(n):
    a=[1]
    carry=0
    n=n+1
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
    a=[str(i) for i in a]
    a=''.join(a)
    print(a)

largefactorial(2)
            
                
            
        
