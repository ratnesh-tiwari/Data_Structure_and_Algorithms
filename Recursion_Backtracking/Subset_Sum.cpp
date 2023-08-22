/*

Link:- https://www.codingninjas.com/studio/problems/subset-sum_3843086?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=2

*/


/*

Using Recursion


void isSum(vector<int> &num, vector<int> & ans, int sum, int index){
	if(index >= num.size()){
		ans.push_back(sum);
		return;
	}

	isSum(num, ans, sum, index+1);
	isSum(num, ans, sum + num[index], index+1);
}


*/


// using bits

vector<int> subsetSum(vector<int> num)
{
    int n = num.size();
    // Ans vector contains all the subset sums.
    vector<int> ans;

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            // Checking wheather the element is present the subset or not.
            if ((1 << j) & i)
            {
                sum += num[j];
            }
        }
        ans.push_back(sum);
    }
    // Sort the vector and finally return it.
    sort(ans.begin(), ans.end());
    return ans;
}