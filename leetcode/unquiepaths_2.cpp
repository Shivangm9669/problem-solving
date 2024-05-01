class Solution {
    // int helpr(int i , int j , vector<vector<int>> &grid , vector<vector<int>> &dp)
    // {
    //     if(i==0 && j==0)
    //     {
    //         return grid[i][j];
    //     }

    //     if(i<0 || j<0)
    //     {
    //         return 0;
    //     }

    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }

    //     int up = INT_MAX;
    //     int right = INT_MAX;
    //     if(i-1>=0)
    //     {
    //         up = helpr(i-1 , j , grid,dp)+grid[i][j];
    //     }
    //     if(j-1>=0)
    //     {
    //         right = helpr(i , j-1 ,grid,dp) + grid[i][j];
    //     }

    //     return dp[i][j]=min(up , right);
    // }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        vector<vector<int>> dp (m , vector<int> (n,-1));

        // cout<<dp.size()<<dp[0].size();
        for(int i =0 ; i<m ; i++)
        {
            for(int j =0 ; j<n ;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=grid[i][j];
                    continue;
                }

                int up = INT_MAX-grid[i][j];
                int left = INT_MAX-grid[i][j];
                if(j>0)
                {
                    left = dp[i][j-1]+grid[i][j];
                }
                if(i>0)
                {
                    up=dp[i-1][j]+grid[i][j];
                }
                
                dp[i][j]= min(up ,left);
                
            }
        }

        return dp[m-1][n-1]; 
    }
};