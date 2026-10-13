class Solution {
  public:
    
     bool detectCycle(unordered_map<int,vector<int>>& adj,
                      int u,
                      vector<bool>& visited,
                      int parent) {

         visited[u] = true;

         for(auto v : adj[u]) {

             if(v == parent) continue;

             if(visited[v]) return true;

             if(detectCycle(adj, v, visited, u)) {
                 return true;
             }
         }

         return false;
     }
    bool isCycle(int V, vector<vector<int>>& edges) {
         
         unordered_map<int,vector<int>> adj;

             for(int i = 0; i < edges.size(); i++) {

                 int u = edges[i][0];
                 int v = edges[i][1];

                 adj[u].push_back(v);
                 adj[v].push_back(u);
             }

             vector<bool> visited(V, false);

             for(int i = 0; i < V; i++) {

                 if(!visited[i] && detectCycle(adj, i, visited, -1)) {
                     return true;
                 }
             }

             return false;
        
    }
};