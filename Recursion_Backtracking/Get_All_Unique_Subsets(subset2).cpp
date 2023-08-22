/*

Link:- https://www.codingninjas.com/studio/problems/get-all-unique-subsets_624393?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

*/


void findSubsets(vector<int> arr, vector<int>& temp, vector<vector<int>>& ans, int index) {
    // Pushing the array 'temp' into 'ans'
    ans.push_back(temp);
    
    for(int i = index; i < (int)arr.size(); ++i) {
        // Checking if the previous element is same as current element
        if(i != index && arr[i] == arr[i - 1]) continue;
        
        // Inserting the current element in array 'temp'
        temp.push_back(arr[i]);
        
        findSubsets(i + 1, arr, temp, ans);
        
        // Removing last element from 'temp'
        temp.pop_back();
    }
}