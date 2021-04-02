def smallestWindow(s, p):
        #code here
        counter=0
        length=0
        min_length=1000000
        i=0
        flag=0
        ans=[]
        temp=[]
        while i<len(s):
            length+=1
            temp.append(s[i])
            if flag==0:
                val=i
                flag=1
            if s[i]==p[counter]:
                counter+=1
            if counter==len(p):
                if min_length>length:
                    min_length=length
                    ans=temp
                temp=[]
                length=0
                counter=0
                flag=0
                i=val
            i+=1
        if ans==[]:
            return -1
        
        return ''.join(ans)

print(smallestWindow("timetopractice","toc"))        
            
            
            
                    
