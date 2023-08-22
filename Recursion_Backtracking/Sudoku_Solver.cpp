/*
link:= https://www.codingninjas.com/studio/problems/sudoku-solver_8416969?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

*/


bool isSafe(vector<vector<int>>& board, int value, int row, int col){
    for(int i = 0 ; i <9 ; i++){
        // row check
        if(board[row][i] == value) return false;
        // col check
        if(board[i][col] == value) return false;

        // 3*3 matrix checking
        if(board[3 * (row/3) + i/3][3 * (col/3) + i % 3] == value) return false;
    }

    return true;
}

bool solve(vector<vector<int>>& board) {
    for(int row = 0; row < 9 ; row++){
        for(int col = 0 ; col < 9; col++){
            // is cell empty
            if(board[row][col] == 0){
                for(int val = 1 ; val <= 9; val++){
                    if(isSafe(board,val, row, col)){
                        board[row][col] = val;
                        // recursive call
                        bool nextSolPossible = solve(board);
                        if(nextSolPossible) return true;
                        // backtracking
                        else board[row][col] = 0;
                    }
                }
            return false;
            }
        }
    }
    return true;
}