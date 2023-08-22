/*

link:- https://www.codingninjas.com/studio/problems/n-queens_696453?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0


*/

void addSol(vector<vector<int>>&board, vector<vector<int>>& ans, int n){
    vector<int> temp;
    for(int i=0; i<n;i++){
        for(int j =0; j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(vector<vector<int>>&board, int row, int col, int n){
    // not in same col
    int c = col;
    int r = row;
    while(c >= 0 ){
        if(board[r][c] == 1)  return false;
        c--;
    }
    // not in same diagonal
    c = col;
    r = row;
    while(r >= 0  && c >= 0 ){
        if(board[r][c] == 1)  return false;
        c--;
        r--;
    }
// not in same diagonal
    c = col;
    r = row;
    while(r < n && c >= 0 ){
        if(board[r][c] == 1)  return false;
        c--;
        r++;
    }
    

    return true;
}

void solve(int n, vector<vector<int>>&board, vector<vector<int>>& ans, int col){
    // base case
    if(col == n) {
        addSol(board, ans, n);
        return;
    }

    // solve 1 case rest will take care by recursion
    for(int i = 0 ; i <n ; i ++){
        if(isSafe(board, i, col, n)){
            board[i][col] = 1;
            solve(n, board, ans, col+1);
            // backtracking
            board[i][col] = 0;
        }
    }
}