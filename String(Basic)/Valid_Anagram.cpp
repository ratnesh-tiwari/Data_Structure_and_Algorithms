/*

link- https://leetcode.com/problems/valid-anagram/

*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;
        } else {
            return false;
        }
        
    }
};

//////////////////////////////////////////////////////////////////

bool isAnagram1(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int arr[26] = {0};
        for(int i = 0 ; i < s.length(); i++){
            arr[s[i] - 97] += 1;
            arr[t[i] - 97] -= 1;
        }

        for(int i = 0 ; i < 26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }