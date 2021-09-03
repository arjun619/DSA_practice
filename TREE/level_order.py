# Definition for a binary tree node.
# class TreeNode
#     def __init__(self, val=0, left=None, right=None)
#         self.val = val
#         self.left = left
#         self.right = right
class Solution
    def levelOrder(self, root Optional[TreeNode]) - List[List[int]]
        if root== None
            return []
        queue=[]
        queue.append(root)
        ans=[]
        while queue
            temp=[]
            val=[]
            for i in queue
                val.append(i.val)
                if i.left
                    temp.append(i.left)
                if i.right
                    temp.append(i.right)
            queue=temp
            ans.append(val)
        return ans
            
        
