class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c){
        if(r<0 || r>=grid.size() ||
           c<0 || c>=grid[0].size()){
            return;
        }
        if(grid[r][c]=='0'){
            return;
        }

        grid[r][c]='0';

        dfs(grid,r,c-1);
        dfs(grid,r-1,c);
        dfs(grid,r,c+1);
        dfs(grid,r+1,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands=0;
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    islands++;

                    dfs(grid,i,j);
                }
            }
        }
        return islands;
    }
};