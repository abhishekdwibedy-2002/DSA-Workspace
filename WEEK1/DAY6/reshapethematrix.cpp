

// https://leetcode.com/problems/reshape-the-matrix/



class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        if((row*col) != (r*c))
            return mat;
        vector<vector<int>> vec( r , vector<int> (c)); 
        vector<int> v;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                v.push_back(mat[i][j]);
            }
        }
        int s=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++,s++){
                vec[i][j]=v[s];
            }
        }
        return vec;
    }
};