def productExceptSelf(self, nums, n):
        #code here
        total=1
        zero=0
        for i in nums:
            if i==0:
                zero+=1
            else:
                total*=i
           
        ans=[]
        if zero>1:
            ans=[0]*n
        elif zero==1:
            for i in nums:
                if i!=0:
                    ans.append(0)
                else:
                    ans.append(total)
        else:
            for i in nums:
                ans.append(total//i)
        return ans
