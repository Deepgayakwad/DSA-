class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        
          vector<int>bfs;
          queue<int>q;
          
          int visited[n] = {0};
          
          q.push(0);
          visited[0] = 1;
          
          while(!q.empty()){
                
                 int node = q.front();
                 q.pop();
                 
                 bfs.push_back(node);
                 
                 vector<int>neighbour = adj[node];
                 
                 for(int element:neighbour){
                       
                        if(!visited[element]){
                              q.push(element);
                              visited[element] = 1;
                        }
                 }
          }
          
          return bfs;
    }
};