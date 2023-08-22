/*

link:- https://www.codingninjas.com/studio/problems/rotate-array_1230543?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0


*/


// brute force

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    vector<int> temp(n);
    for(int i=0;i<k;i++){
        temp[i] = arr[i]; 
    }

    for(int i=k;i<n;i++){
        arr[i-k] = arr[i]; 
    }

     for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)]; 
    }

    return arr;

}



// time complecity optimized

vector < int > rotateArray(vector < int > & arr, int k) {

    int n = arr.size();
    // Create a 'rotatedArr' of size 'n'.
    vector < int > rotatedArr(n);

    // Now store ith value (0 <= i <= n-1) of 'arr' at ((i - k + n)%n)th position in 'rotatedArr'.
    for (int i = 0; i < n; i++) {
        rotatedArr[(i - k + n)%n] = arr[i];
    }
    // Return the rotatedArr.
    return rotatedArr;
}

// space optimized

void reverseImp(vector<int>& arr, int start, int end){
    while(start <= end){
        swap(arr[start++], arr[end--]);
    }
}

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    reverseImp(arr, 0, k-1);
    reverseImp(arr, k, arr.size()-1);
    reverseImp(arr, 0, arr.size()-1);
    return arr;
}