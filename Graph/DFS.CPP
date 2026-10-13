class Solution {
  public:
    
    void findDFS(vector<vector<int>>& adj,int visited[], vector<int>&dfs,int node){
           
                visited[node] = 1;
                dfs.push_back(node);
                
                vector<int>neighbour = adj[node];
                
                for(int element:neighbour){
                      
                       if(!visited[element]){
                            
                            findDFS(adj,visited,dfs,element);
                       }
                }
                
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        
         int n = adj.size();
          vector<int>dfs;
          int visited[n] = {0};
          
        
          
          findDFS(adj,visited,dfs,0);
          
          return dfs;
          
          
        
    }
};