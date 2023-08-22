/*
Link:- https://www.codingninjas.com/studio/problems/good-numbers_625508?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

A number is good if sum of all digites in right is less than left one

840 == good number

4 > 0 = true
8 > 4 + 0 = true

300 = false
0 > 0 = false

*/


// if digit is present in the number it is not a good number
bool isGoodNumber(int num, int sum, int digit){
  // base case
	if(num == 0 ){
		return true;
	}

	int val = num % 10;

// verify sum and digit
	if(val == digit || val <= sum){
		return false;
	}
// recursive call
	isGoodNumber(num/10, sum + val, digit);
}