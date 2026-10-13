class Solution {
  public:
  
    bool DetectCycleDFS(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited,vector<bool>&inRec){
           
             visited[u] = true;
             inRec[u] = true;
             
             
             
             for(auto v:adj[u]){
                   
                     
                     if(visited[v] && inRec[v]){
                           
                           return true;
                     }
                     
                     if(!visited[v]){
                          
                          if(DetectCycleDFS(adj,v,visited,inRec)){
                                return true;
                          }
                     }
                     
                     
             }
             
             
             inRec[u] = false;
             return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        int E = edges.size();
        unordered_map<int,vector<int>>adj;
        
        for(int i = 0;i < E; i++){
              
               int u = edges[i][0];
               int v = edges[i][1];
               
               adj[u].push_back(v);
        }
        
        vector<bool>visited(V,false);
        vector<bool>inRec(V,false);
        
        
        for(int i = 0;i < V; i++){
              
              if(!visited[i] && DetectCycleDFS(adj,i,visited,inRec)){
                   return true;
              }
        }
        
        
        return false;
        
        
    }
};