class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        for(int i = 0 ; i < n ; i++){
            unordered_set<char> h1;
            for(int j = 0 ; j < m ; j ++){
                if(board[i][j] == '.') continue;
                else if (h1.count(board[i][j])) return false;
                h1.insert(board[i][j]);
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            unordered_set<char> h1;
            for(int j = 0 ; j < m ; j ++){
                if(board[j][i] == '.') continue;
                else if (h1.count(board[j][i])) return false;
                h1.insert(board[j][i]);
            }
        }

        for(int squares = 0 ; squares < 9 ; squares++){
            unordered_set<char> h1;

            for(int i = 0 ; i < 3 ; i++){
                for(int j = 0 ; j < 3 ;j++){
                    int row = (squares/3)*3 +i;
                    int column = (squares%3)*3 + j;
                    if(board[row][column] == '.') continue;
                    else if(h1.count(board[row][column])) return false;
                    h1.insert(board[row][column]);
                }
            }
        }
        return true;
    }
};
