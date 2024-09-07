 class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector <int> v;
    void dfs(int src, vector<int> adj[], vector<bool> &vis) { 
        v.push_back(src);
        vis[src] = true;
    
        for(int child : adj[src]) {
            if(!vis[child]) dfs(child, adj, vis);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector <bool> vis(V, false);
        dfs(0, adj, vis);
        return v;
    }
};