/*

Link:- https://www.codingninjas.com/studio/problems/combination-sum_981296?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=3


*/

void isSum(vector<int> &ARR, int B, vector<vector<int>> &ans, vector<int> temp, int index ){
    if(index == ARR.size()){
        if(B == 0){
            ans.push_back(temp);
        }
        return;
    }

    if(ARR[index] <= B) {
        temp.push_back(ARR[index]);
        isSum(ARR, B - ARR[index] , ans, temp, index);
        temp.pop_back();
    }


    isSum(ARR, B, ans, temp, index+1);
    
}