/*

Link:- https://www.codingninjas.com/studio/problems/palindrome-partitioning_626181?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

Input: s = “aab”

Output: [ ["a","a","b"], ["aa","b"] ]

*/

void partitionHelper(vector<vector<string>>& ans, vector<string>& current, string& s, int index) {
    int n = s.size();

    // Base case: if we have reached the end of the string.
    if (index >= n) {
        ans.push_back(current);
        return;
    }

    // Explore all possible partitions starting from the current index.
    for (int i = index; i < n; i++) {
        // Check if the substring from index 'index' to 'i' is a palindrome.
        if (checkPalindrome(index , i , s)) {
            // Add the palindrome substring to the current partition.
            current.push_back(s.substr(index, i - index + 1));

            // Recursively generate partitions for the remaining string.
            generatePartitions(ans, current, s, i + 1);

            // Backtrack and remove the last palindrome substring from the current partition.
            current.pop_back();
        }
    }
}
