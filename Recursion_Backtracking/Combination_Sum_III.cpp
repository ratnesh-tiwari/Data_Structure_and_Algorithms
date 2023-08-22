/*

Link:- https://www.codingninjas.com/studio/problems/combination-sum-iii_5038357?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

*/

void combinationSum(int i, int k, int n, vector < int > & temp, vector < vector < int >> & ans) {

    // Check of size and sum
    if (i == k) {
        if (n == 0) {
            ans.push_back(temp);
        }
    }

    // We can use every element once only so we will use the element greater than the previous elements.
    // So for 'curr' in range [last+1, 9]
    for (int curr = i + 1; curr < 10; curr++) {
        // Add the current element to 'temp' and call the create function with n-curr.
        temp.push_back(curr);
        create(i + 1, k, n - curr, temp, ans, curr);

        // Backtrack.
        temp.pop_back();
    }
}