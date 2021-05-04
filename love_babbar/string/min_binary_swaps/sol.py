class Solution:
    def minFlips(self, S):
        # Code 
        arr=S
        exp=0
        cnt1=0
        cnt2=0
        for i in range(len(arr)):
            if i%2==0:
                if int(arr[i])==0:
                    continue
                else:
                    cnt1+=1
            else:
                if int(arr[i])==0:
                    cnt1+=1
                else:
                    continue
        for i in range(len(arr)):
            if i%2==0:
                if int(arr[i])==0:
                    cnt2+=1
                else:
                    continue
            else:
                if int(arr[i])==0:
                    continue
                else:
                    cnt2+=1
        if cnt1>cnt2:
            return cnt2
        return cnt1
