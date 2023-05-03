class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int m = matrix.size();//row
        int n = matrix[0].size();//col
        
        
        vector<vector<int>> transposeV(n,vector<int>(m));

        for(int i =0 ;i<n;i++){//rows
            for(int j=0;j<m;j++){//col
                transposeV[i][j] = matrix[j][i];
            }
        }
        return transposeV;
    }
};