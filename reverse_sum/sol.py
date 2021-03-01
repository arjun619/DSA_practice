def myfunc(num):
    num=str(num)
    num=num[::-1]
    num=[i for i in num]
    print(num)
    temp=[]
    valler=num
    for i in range(len(num)):
        if num[i]=='0':
            temp.append(0)
            valler.pop(i)
        else:
            break
    print(temp)
    temp=''.join(temp)
    print(temp)
myfunc(23700)
