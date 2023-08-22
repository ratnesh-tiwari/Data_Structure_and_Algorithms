/*

Link:- https://www.codingninjas.com/studio/problems/rat-in-a-maze-_8842357?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/


bool isSafe(vector<vector<int>> &mat, vector<vector<int>>& visited, int n, int x , int y){
    if((x >=0 && x < n) && (y >= 0 && y <n) && mat[x][y] == 1 && visited[x][y] == 0 ) return true;
    else return false;
}


void solve(vector<vector<int>> &mat, vector<string>& ans, string temp, vector<vector<int>>& visited, int n, int x , int y){
    if( x == n -1 && y == n -1){
        ans.push_back(temp);
        return;
    }

    visited[x][y]=1;

    // 4 Movement
    // D, L, R, U

    // Down 
    if(isSafe(mat, visited, n, x+1,y)){
        solve(mat, ans, temp+'D', visited, n, x+1, y);
    }
    
    // Left 
    if(isSafe(mat, visited, n, x,y-1)){
        solve(mat, ans, temp+'L', visited, n, x, y-1);
    }
    
    // Right 
    if(isSafe(mat, visited, n, x,y+1)){
        solve(mat, ans, temp+'R', visited, n, x, y+1);
    }
    
    // Up 
    if(isSafe(mat, visited, n, x-1,y)){
        solve(mat, ans, temp+'U', visited, n, x-1, y);
    }

     visited[x][y]=0;
}