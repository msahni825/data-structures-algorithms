void helper(int i,int j,vector<vector<string>>& accounts, vector<string> adj[], unordered_map<string,int> &vis){
     
        int connect = vis[accounts[i][j]];

        
        for(int k = 1;k<accounts[i].size();k++){
           int  change = vis[accounts[i][k]];
           
            if(k!=j && connect!=change ){
                
                if(change>=1){
                  
                   
                    for(int z =1;z<adj[change-1].size();z++){
                        
                        adj[connect-1].push_back(adj[change-1][z]);
                        vis[adj[change-1][z]] = connect;
                    }
                    
                   
                }
                else{
                    
                     adj[connect-1].push_back(accounts[i][k]);
                      vis[accounts[i][k]] = connect;
             
                }
                
             if(change-1>=0){
             adj[change-1].clear();
             }
               
            }
        }
        
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        vector<string> adj[accounts.size()];
         unordered_map<string,int> vis;
          vector<vector<string>> ans;
        
        for(int i =0;i<accounts.size();i++){
            adj[i].push_back(accounts[i][0]);
        }
        
        for(int i =0;i<accounts.size();i++){
            string name = accounts[i][0];
            
            for(int j =1;j<accounts[i].size();j++){
                string email = accounts[i][j];
                if(vis[email]>=1 && vis[email]-1!=i ){
             
                 
               helper(i,j,accounts,adj,vis);
               
                   break;
                    
                }
                else{
                    if(vis[email]==0){
                    vis[email] = i+1;
                        adj[i].push_back(email);
                    }
                    
                }
            }
        
            
            
        }
        
       for(int i =0;i<accounts.size();i++){    
           if(adj[i].size()>1){
             ans.push_back(adj[i]);
               sort(ans[ans.size()-1].begin()+1,ans[ans.size()-1].end());
       }
           
        }
        
  
        
        return ans;
        
    }
