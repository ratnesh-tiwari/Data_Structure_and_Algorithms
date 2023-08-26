/*

link- https://leetcode.com/problems/rotate-string/

*/

class Solution {
private:
string rotateByOne(string s){
    string temp = s.substr(1, s.length());
    return (temp + s.substr(0, 1));
}
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        for(int i = 0 ; i < s.length(); i++){
            s = rotateByOne(s);
            if(s == goal){
                return true;
            }
        }
        return false;
    }
};


//////////////////////////////////////////

class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.size()==goal.size() && (s+s).find(goal);
    }
};