class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        //tranpose

        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] =  temp;
            }
        }

        //reverse

        for(int m =0;m<n;m++){
            int o = 0;
            int p = n-1;

            while(o<=p){
                int temp = matrix[m][o];
                matrix[m][o] =  matrix[m][p];
                 matrix[m][p] = temp;
                 o++;
                 p--;
            }
        }

        return;
        
    }
};