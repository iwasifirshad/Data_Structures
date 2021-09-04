//

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,j,len=0,sum=0;
        len=mat.size();
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[i].size();j++)
            {
                if(i==j)
                {
                    sum+=mat[i][j];
                    //mat[i][j]=0;
                }
                if((i+j==len-1)%2!=0)
                {
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};

------METHOD_02---------
  
  class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,j,len=0,sum=0;
        len=mat.size();
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[i].size();j++)
            {
                if(i==j || i+j==len-1)
                {
                    sum+=mat[i][j];
                    mat[i][j]=0;
                }
            }
        }
        return sum;
    }
};
