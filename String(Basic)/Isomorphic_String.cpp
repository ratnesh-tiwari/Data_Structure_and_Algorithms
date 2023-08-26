/*

link- https://leetcode.com/problems/isomorphic-strings/submissions/

*/

bool isIsomorphic(string s, string t) {
        int arr[256] = {0};
        int arr2[256] = {0};
        for(int i = 0 ; i < s.size(); i++){
            if(arr[s[i]] != arr2[t[i]]){
                return false;
            }
            arr[s[i]] = i + 1;
            arr2[t[i]] = i + 1;
        }
        return true;
    }

    ////////////////////////////////////////////

    bool areIsomorphic(string str1, string str2)
{
   
    // initializing an unordered_map to store letters from
    // str1 and str2 as key value pairs
    unordered_map<char, char> charCount;
   
    // iterating over str1 and str2
    for (int i = 0; i < str1.length(); i++)
    {
       
        // if str1[i] is a key in charCount
        if (charCount.count(str1[i]))
        {
           
            // checking if the value in charCount for key
            // str1[i] is equal to str2[i]
            if (charCount[str1[i]] != str2[i]) {
                return false;
            }
        }
        // if str2[i] is not a value in charCount
        else {
            // checking if str2[i] is already a value in
            // charCount
            vector<char> values;
            for (auto it : charCount) {
                values.push_back(it.second);
            }
            if (find(values.begin(), values.end(), str2[i])
                != values.end()) {
                return false;
            }
            else {
                charCount[str1[i]] = str2[i];
            }
        }
    }
    return true;
}