class Solution {
  public:
    
     
     
     void dfs(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited,stack<int>&st){
           
             visited[u] = true;
             
             
             for(auto &v:adj[u]){
                   
                   if(!visited[v]){
                         
                         dfs(adj,v,visited,st);
                   }
             }
             
             st.push(u);
     }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        
        int E = edges.size();
        unordered_map<int,vector<int>>adj;
        
        for(int i = 0;i < E; i++){
             
             int u = edges[i][0];
             int v = edges[i][1];
             
             adj[u].push_back(v);
        }
        
        stack<int>st;
        
        
        vector<bool>visited(V,false);
        
        for(int i = 0;i < V;i++){
              
              if(!visited[i]){
                    
                    dfs(adj,i,visited,st);
              }
        }
        
        
        vector<int>ans;
        
        while(!st.empty()){
              
              ans.push_back(st.top());
              st.pop();
        }
        
         return ans;
        
    }
};