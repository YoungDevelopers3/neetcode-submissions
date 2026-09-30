class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9),col(9),boxes(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                int value=board[r][c];
                if(value=='.'){
                    continue;
                }
                int box=(r/3)*3+(c/3);
                if(row[r].count(value)||col[c].count(value)||boxes[box].count(value)){
                    return false;
                }
                row[r].insert(value);
                col[c].insert(value);
                boxes[box].insert(value);
            }
        }
        return true;
    }
};
