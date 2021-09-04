//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,count=0;
        for(i=0;i<grid.size();i++)
          for(j=0;j<grid[i].size();j++)
          {
              if(grid[i][j]<0)
                  count++;
          }
        return count;
    }
};
