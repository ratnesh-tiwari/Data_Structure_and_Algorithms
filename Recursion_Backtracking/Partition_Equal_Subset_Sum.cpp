/*

Link:- https://www.codingninjas.com/studio/problems/partition-equal-subset-sum_892980?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker

*/


// recursive solution 
bool solve(vector<int> &arr, int n,  int index, int target){
	if(index >= n || target < 0) return false;
	if(target==0) return true;
	bool incl=solve(arr, n, index+1, target-arr[index]);
	bool excl= solve(arr, n, index+1, target);
	return incl || excl;
}

// dp
bool solve(vector<int> &arr, int n, vector<vector<int>> &dp, int index, int target){
	if(index >= n || target < 0) return false;
	if(target==0) return true;
	if(dp[index][target] != -1) return dp[index][target];
	bool incl=solve(arr, n,dp, index+1, target-arr[index]);
	bool excl= solve(arr, n,dp, index+1, target);
	return dp[index][target] = incl || excl;
}