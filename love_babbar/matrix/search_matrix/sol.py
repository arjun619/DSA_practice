def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        n=len(matrix)
        m=len(matrix[0])
        for i in range(n):
            if target>=matrix[i][0] and target<=matrix[i][m]:
                try:
                    matrix[i].index(target)
                except:
                    return False
                return True
            
            
matrix=[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
target=13
searchMatrix(0,matrix,target)
