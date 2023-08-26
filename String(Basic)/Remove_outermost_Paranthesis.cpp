/*

link- https://leetcode.com/problems/remove-outermost-parentheses/submissions/

*/


    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> st;
        for(int i = 0; i < s.length() ; i++){
            if(s[i] == '(' && st.empty()){
                st.push(s[i]);
            } else if (s[i] == '('){
                ans += s[i];
                st.push(s[i]);
            } else if (st.size() == 1){
                st.pop();
            } else {
                st.pop();
                ans += s[i];
            }
        }
        return ans;
    }


    ////////////////////////////////////////////////////////

    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ans = "";

        for (auto c: s) {
            if (cnt == 0 && c == '(') cnt--;
            else if (cnt == -1 && c == ')') cnt++;
            else {
                ans += c;
                if (c == '(') cnt--;
                else cnt++;
            }
        }

        return ans;

    }