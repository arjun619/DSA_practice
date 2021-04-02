def smallestWindow(s, p):
        #code here
        ptemp=[0]*26
        for i in p:
            ptemp[ord(i)-97]+=1
        k=len(p)
        length=0
        min_length=1000000
        flag=0
        ans=[]
        temp=[]
        i=0
        temper=ptemp.copy()
        while i<len(s):
            length+=1
            temp.append(s[i])
            if flag==0:
                val=i
                flag=1
            if ptemp[ord(s[i])-97]>0:
                ptemp[ord(s[i])-97]-=1
                k-=1
            if k==0:
                if length<min_length:
                    min_length=length
                    ans=temp
                k=len(p)
                i=val
                length=0
                flag=0
                temp=[]
                ptemp=temper.copy()
            i+=1
        print(min_length)
        if ans==[]:
            return -1
        else:
            return ''.join(ans)
                    
         
            

print(smallestWindow("timetopractice","toc"))        
            
            
            
                    
