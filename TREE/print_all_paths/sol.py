# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def traverse(self,root,arr,ans):
        if root is None:
            return
        
        arr.append(root.val)
        if root.left is None and root.right is None:
            # print(self.arr)
            ans.append(arr.copy())
            print(arr)
        self.traverse(root.left,arr,ans)
        self.traverse(root.right,arr,ans)
        arr.pop(-1)
        return False
        
        
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        arr=[]
        ans=[]
        self.traverse(root,arr,ans)
        newans=[]
        for a in ans:
            newa=[str(i) for i in a]
            val='->'.join(newa)
            newans.append(val)
        return newans
        
