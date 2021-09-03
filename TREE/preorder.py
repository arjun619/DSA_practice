# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        mystack=[root]
        ans=[]
        while mystack:
            
            cur=mystack.pop()
            if cur:
                ans.append(cur.val)
                if cur.right:
                    mystack.append(cur.right)
                if cur.left:
                    mystack.append(cur.left)
            else:
                return ans
        return ans
                
                
            
        
