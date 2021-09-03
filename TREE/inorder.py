# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        mystack=[]
        ans=[]
        node= root
        while True:
            if node:
                mystack.append(node)
                node=node.left
            else:
                if len(mystack)==0:
                    break
                node=mystack.pop()
                ans.append(node.val)
                node=node.right
                
                
                
        return ans
                
        
