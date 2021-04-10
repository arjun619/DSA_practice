def gethash(str1):
    #n=len(str1)
    str1=[ord(i) for i in str1]
    val=0
    exper=0
    for i in range(len(str1)-1,-1,-1):
        val+=int(str1[i])*exper
        exper+=1
    return val
    
def rabinkarp(str1,str2):
    found_at=[]
    str2_hash=gethash(str2)
    for i in range(len(str1)-len(str2)+1):
        #print(gethash(str1[i:i+len(str2)]))
        if str2_hash==gethash(str1[i:i+len(str2)]):
            flag=0
            #print("hemlo")
            for j in range(len(str2)):
                if str1[i+j]!=str2[j]:
                    print(str1[i+j],str2[j])
                    print("hemlo")
                    flag=1
                    break
            if flag==0:
                found_at.append(i)
    return found_at

txt="THIS IS A TEST TEXT"
pat="TEST"
print(rabinkarp(txt,pat))
                

    
        
        
    
