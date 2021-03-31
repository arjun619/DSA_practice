def rowWithMax1s(self,arr, n, m):
		# code here
		max_sum=0
		max_index=-1
        for i in range(n):
            if sum(arr[i])>max_sum:
                max_sum=sum(arr[i])
                max_index=i
        return max_index
