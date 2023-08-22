/*

Link:- https://www.codingninjas.com/studio/problems/combination-sum-ii_1112622?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

void isSum(vector<int> &ARR, int B, vector<vector<int>> &ans, vector<int> temp, int index ){
    if(B == 0){
    	ans.push_back(temp);
    	return;
    }


    for(int i = index; i < ARR.size(); i++){
		if(ARR[i] == ARR[i-1] && i > index){
			continue;
		}
		if(ARR[i] > B) break;
		temp.push_back(ARR[i]);
		isSum(ARR, B - ARR[i], ans,  temp, i+1);
		temp.pop_back();
	}   
}