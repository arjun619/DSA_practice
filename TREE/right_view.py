def right_view(root):
    if root is None:
        return []
    queue=[root]
    ans=[]
    while queue:
        n=len(queue)
        for i in range(1,n+1):
            node=queue.pop(0)
            if i==n:
                ans.append(node.val)
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)
    print(ans)
                
