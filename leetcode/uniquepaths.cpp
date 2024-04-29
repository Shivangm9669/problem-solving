// class Solution1  {  
//     int helpr(int m , int n , int row , int col) //exhaustive search approach TLE
//     {
//         if(row==m && col==n)
//         {
//             return 1;
//         }

//         if(row>m || col>n)
//         {
//             return 0;
//         }

//         int left = helpr(m , n , row+1 , col);
//         int right = helpr(m , n , row , col+1);

//         return left+right;
//     }
// };

// class Solution{

//     int helpr(int m, int n , int row , int col ,  vector<vector<int>> &dp) // memoziation submitted
//     {
//         if(row==1 && col==1)
//         {
//             return 1;
//         }

//         if(row<1|| col<1)
//         {
//             return 0;
//         }
        
//         if(dp[row][col]!=-1)
//         {
//             return dp[row][col];
//         }
//         int left = helpr(m , n, row-1 , col , dp);
//         int right = helpr(m , n , row , col-1,  dp);

//         return dp[row][col]=left+right;
//     }
//     public:
//         int uniquePaths(int m, int n) {
//         vector<vector<int>> dp (m+1 , vector<int>(n+1,-1));
//         return helpr(m ,n , m, n , dp);
//     }

// };

class Solution{
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (m , vector<int>(n,-1));
        for(int i =0 ; i<m ; i++)
        {
            dp[i][0]
        }

        for(int i =1 ; i<=m , i++)
        {

        }
        return dp[m][n];
    }
}; 