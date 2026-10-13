class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        
          
          unordered_map<int,vector<pair<int,int>>>adj;
          
          
          for(int i = 0;i < edges.size(); i++){
                
                 
                 int u = edges[i][0];
                 int v = edges[i][1];
                 int cost =edges[i][2];
                 
                 
                 adj[u].push_back({cost,v});
                 adj[v].push_back({cost,u});
          }
         
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            
            pq.push({0,src});
            
            
            vector<int>result(V,INT_MAX);
            result[src] = 0;
            
            
            while(!pq.empty()){
                  
                   
                   pair<int,int>p = pq.top();
                   pq.pop();
                   
                   int currNode = p.second;
                   int d = p.first;
                   
                   
                   for(auto &v:adj[currNode]){
                         
                           
                           int neighBour = v.second;
                           int dist = v.first;
                           
                           if(d + dist < result[neighBour]){
                                 
                                 result[neighBour] = d + dist;
                                 pq.push({d+dist,neighBour});
                           }
                   }
            }
            
            return result;
            
        
    }
};