class Solution {
    public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector <int> v;
        vector <int> vis(V, false);

        queue <int> q;
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()) {
            int par = q.front();
            q.pop();
    
            v.push_back(par);
    
            for(int &child : adj[par]) {
                if(vis[child] == false) {
                    q.push(child);
                    vis[child] = true;
                }
            }
        }
        
        return v;
    }
};