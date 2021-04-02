def isValid(s):
    #code here
    lister=s.split('.')
    if len(lister)!=4:
        return 0
    flag=0
    for i in lister:
        flag2=0
        flag3=0
        if i and len(i)<=3:
            try:
                temp=len(i)
                val=int(i)
                if val==0:
                    for t in i:
                        if t!='0':
                            flag2=1
                if i[0]=='0' and temp!=1:
                    flag3=1
                if (val >=0 and val<=255) and flag2==0 and flag3==0:
                    flag+=1
            except:
                pass
    if flag==4:
        return 1
    else:
        return 0

#print(isValid("00.00.00.00"))
print(isValid('172.16.254.01'))
