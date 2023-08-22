/*
Link:- https://www.codingninjas.com/studio/problems/print-subsequences_8416366?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

Generate all power set of a given strng

string s = 'abc';
outupt = ['', ,'a' ,'ab' ,'abc' ,'ac', 'b' ,'bc' ,'c'];
*/


void subset(string s, int index, vector<string>& ans, string temp){
    if(s.length() == index) {
        ans.push_back(temp);
        return;
    }

    subset( s,  index+1, ans,  temp);

    char ch = s[index];
    temp.push_back(ch);
    subset(s, index+1, ans, temp);
}
