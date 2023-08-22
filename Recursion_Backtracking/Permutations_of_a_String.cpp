/*
Link:- https://www.codingninjas.com/studio/problems/permutations-of-a-string_985254?leftPanelTab=0

Generate a permutation of given string

i/p = 'abc'
ans= [
  abc acb bac bca cab cba
bc cb
c

]
*/

void permutataio(string &str,int index, vector<string>& ans){
    if(index >= str.length()){
        ans.push_back(str);
        return;
    }

    for(int i = index; i < str.length() ; i++){
        swap(str[index], str[i]);
        permutataio(str, index+1, ans);
        // backtracking
        swap(str[index], str[i]);
    }
}
