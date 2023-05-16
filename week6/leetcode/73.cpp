class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector <int> row(m,0);
        vector <int> column(n,0);
        

        //setting the row and column vector as 1 if zero is found in main matrix
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    column[j] = 1;
                }
            }
        }

        //updation of main matrix
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i] || column[j]){
                    matrix[i][j] = 0;
                }
            }
        }



    }
};