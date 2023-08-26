/*

link- https://leetcode.com/problems/longest-common-prefix/submissions/

*/

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) {
            return "";
        }
        string ans = strs[0];
        for(int i = 1 ; i < strs.size(); i++){
            string temp = "";
            for(int j = 0 ; j < strs[i].length() ; j++){
                if(ans[j] == strs[i][j]){
                    temp += strs[i][j];
                } else {
                    break;
                }
            }
            if(temp.length() == 0){
                return "";
            }else {
                ans = temp;
            }
        }
        return ans;
    }

    /////////////////////////////////

    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
