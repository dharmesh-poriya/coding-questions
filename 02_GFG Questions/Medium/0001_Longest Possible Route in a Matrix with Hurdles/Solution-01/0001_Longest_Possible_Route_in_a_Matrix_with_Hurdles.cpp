// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
    private:
    void findLongestPath(vector<vector<int>> &matrix,int x,int y,int xd,int yd,int pathlength,int &ans){
        if(x == xd && y == yd){
            if(pathlength>ans)
                ans = pathlength; 
            return;
        }
        
        matrix[x][y]  = 2;
         
        vector<pair<int,int>> directions = {{0,1}, {0,-1}, {1,0} ,{-1,0}};
        
        for(auto d : directions) {
            int newx = d.first+x;
            int newy = d.second+y;
            
            if(0<=newx && 0<=newy && matrix.size()>newx && matrix[0].size()>newy && 1==matrix[newx][newy])
                findLongestPath(matrix,newx,newy,xd,yd,pathlength+1,ans); 
        }
        
        matrix[x][y] =1;
     }
    public:
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        if(matrix[xs][ys]==0 || matrix[xd][yd]==0)
            return -1;
        int ans = -1;
        findLongestPath(matrix,xs,ys,xd,yd,0,ans);
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends