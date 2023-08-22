/*

link:- https://leetcode.com/problems/remove-invalid-parentheses/

*/

// sol is not an optimize solll



bool isValid(string str){
    stack<char> s;
    for(int i =0; i < str.length(); i++){
        char ch = str[i];
        if(ch == '(') s.push(ch);
        else if(ch == ')'){
            if(s.empty()) return false;
            s.pop();
        }
    }
    if(s.empty()) return true;
    else return false;
}

int getMinimumRemoval(string str){
    stack<char> s;
    for(int i =0; i < str.length(); i++){
        char ch = str[i];
        if(ch == '(') s.push(ch);
        else if(ch == ')'){
            if(s.empty()) s.push(ch);
            else if(s.top() == ch) s.push(ch);
            else if (s.top() == '(') s.pop();
        }
    }
    return s.size();
}

void solve(string str, vector<string>& ans, int minremoval){
    if(minremoval == 0){
        if(isValid(str) &&  find(ans.begin(), ans.end(), str) == ans.end()) ans.push_back(str);
        return;
    }

    for(int i = 0 ; i < str.length() ; i++){
        if (str[i] == '(' || str[i] == ')') {
            string left = str.substr(0, i);
            string right = str.substr(i + 1, str.length());
            solve(left + right, ans, minremoval - 1);
        }
    }
}