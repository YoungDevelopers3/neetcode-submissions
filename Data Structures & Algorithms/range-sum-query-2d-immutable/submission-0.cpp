class NumMatrix {
private:
    vector<vector<int>> prefix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        prefix.assign(m + 1, vector<int>(n + 1, 0));

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                prefix[r+1][c+1] = matrix[r][c]
                                 + prefix[r][c+1]   // above
                                 + prefix[r+1][c]   // left
                                 - prefix[r][c];    // counted twice
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefix[row2+1][col2+1]
             - prefix[row1][col2+1]    // strip above
             - prefix[row2+1][col1]    // strip left
             + prefix[row1][col1];     // added back
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */