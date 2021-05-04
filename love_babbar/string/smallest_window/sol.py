def smallestWindow(self, s, p):
        #code here
        sfreq=dict()
        pfreq=dict()
        for i in s:
            if i in sfreq.keys():
                sfreq[i]+=1
            else:
                sfreq[i]=1
        for i in p:
            if i in pfreq.keys():
                pfreq[i]+=1
            else:
                pfreq[i]=1
        for i in pfreq.keys():
            if i in sfreq.keys():
                if sfreq[i]<pfreq[i]:
                    return -1
            else:
                return -1
                    
        i=0
        j=len(s)-1
        
        while i<j:
            if s[i] in pfreq.keys():
                if sfreq[s[i]]> pfreq[s[i]]:
                    
                    sfreq[s[i]]-=1
                    i+=1
                else:
                    if s[j] in pfreq.keys():
                        if sfreq[s[j]]> pfreq[s[j]]:
                            sfreq[s[j]]-=1
                            j-=1
                            
                        else:
                            return s[i:j+1]
                    else:
                        
                        sfreq[s[j]]-=1
                        j-=1
            else:
                sfreq[s[i]]-=1
                i+=1
