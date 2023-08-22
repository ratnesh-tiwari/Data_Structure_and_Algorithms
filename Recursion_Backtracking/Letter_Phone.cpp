/*

Link:- https://www.codingninjas.com/studio/problems/letter-phone_626178?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

*/

void combination(string digits, int index, string& temp, vector<string>& mapping, vector<string>& ans) {
    // Base case: If we have processed all digits, add the current combination to the result.
    if (index == digits.length()) {
        ans.push_back(temp);
        return;
    }

    // Get the letters corresponding to the current digit.
    string letters = mapping[digits[index] - '0'];

    // Iterate over the letters and generate combinations.
    for (char letter : letters) {
        temp += letter;
        generateCombinations(digits, index + 1, temp , mapping, ans);
        temp.pop_back();
    }
}