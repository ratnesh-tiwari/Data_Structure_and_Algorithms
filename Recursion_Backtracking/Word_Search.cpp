/*

link:- https://www.codingninjas.com/studio/problems/word-search---l_892986?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


*/

bool dfs(vector<vector<char>>& board, string& word, int x, int y, int n, int m, int ) 
{
    // Check if the word has been found.
    if (index == word.size())
        return true;

    // Check if the current position is out of bounds or the cell is visited or doesn't match the current letter.
    if (x < 0 || x == n || y < 0 || y == m || board[x][y] == '#' || board[x][y] != word[index])
        return false;


        // Store the value of the current cell.
        char temp = board[x][y];

        // Mark the current cell as visited.
        board[i][y] = '#';

        // Recursively call dfs for the neighboring cells.
        bool top = dfs(x + 1, y, n, m, board, word, k + 1);
        bool down = dfs(x, y + 1, n, m, board, word, k + 1);
        bool right = dfs(x - 1, y, n, m, board, word, k + 1);
        bool left = dfs(x, y - 1, n, m, board, word, k + 1);

        // Restore the original value of the current cell.
        board[x][y] = temp;

        // Return true if any of the neighboring cells found the word.
        return top || down || right || left;
    
}