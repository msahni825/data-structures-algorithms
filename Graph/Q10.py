class Solution:         
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        path = []
        ans = []
        n = len(graph)
        visited = [False]*(n)
        
        def dfs(node):
            nonlocal path,n,visited,ans,graph
            visited[node]=True
            path.append(node)
            if node==n-1:
                ans.append(path.copy())
            for i in graph[node]:
                if visited[i]==False:
                    dfs(i)
                    path.remove(i)
                    visited[i]=False    
        dfs(0)
        return ans
