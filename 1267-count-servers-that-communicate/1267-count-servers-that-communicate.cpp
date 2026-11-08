class Solution {
public: 
    int count=0;
    int fun(vector<vector<int>> &grid , int a, int b){

        int n = grid.size();
        int m = grid[0].size();
       for(int j=0;j<m;j++){
        if(b!=j && grid[a][j]==1){
            count++;
            return 0;
        }
       }
       for(int i=0;i<n;i++){
        if(a!=i && grid[i][b]==1){
            count++;
            return 0;
        }
       
        
       }
       return 0;
    }

        
    
    int countServers(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                   fun(grid,i,j);
            }
        }
        return count;
    }
};