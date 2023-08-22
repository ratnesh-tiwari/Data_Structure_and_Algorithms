/*
link:- https://www.codingninjas.com/studio/problems/generate-all-parenthesis_920445?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

We need to genreat all possible open and close pair brackets for a given number

n=3
((()))= true
(()()) = true
()()() = true
())(() = false
*/

void generateParanthesis(int n, int open, int close, vector<string> &ans, string temp){
    if(open >= n && close >= n){
        ans.push_back(temp);
        return;
    }

    if(open < close || open > n || close > n){
        return;
    }

    for(int i= 0 ; i<= 1 ;i++){
        char ch = i == 0 ? '(' : ')';
        temp.push_back(ch);
        if(i ==0){
            generateParanthesis(n, open+1,  close, ans,  temp);
        } else {
            generateParanthesis(n, open,  close+1, ans, temp);
        }
        temp.pop_back();
    }
}