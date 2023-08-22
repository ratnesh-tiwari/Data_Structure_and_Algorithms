/*
Link:- https://www.codingninjas.com/studio/problems/-binary-strings-with-no-consecutive-1s._893001?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

a number is given and we need to generat all possible combination of 0 & 1 of the given length with no consecutive 1

0000 = true
0010 = ture
1010 = true
1100 = false
0110 = false

*/

void stringGenerator(int N, int index, vector<string> & ans, string temp){
  // Base case
    if(index >= N){
        ans.push_back(temp);
        return;
    }

    for(int i = 0 ; i <= 1; i++){
        char ch = i == 0 ? '0' : '1';
        // check where there are two consicutive 1s.
        if(i == 1 && temp.back() == '1'){
            continue;
        }
        // push ch
        temp.push_back(ch);
        // recursive call
        stringGenerator(N, index+1, ans, temp);
        // backtrack
        temp.pop_back();
    }
}