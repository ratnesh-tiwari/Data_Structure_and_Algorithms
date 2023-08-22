/*

Link:- https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

int secondlargest(int n, vector<int> a){
    int largest = a[0];
    int slargest = -1;
    for(int i =1 ; i<n; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}



////////////////////////////////

int secondsmallest(int n, vector<int> a){
    int smalest = a[0];
    int ssmallest = INT_MAX;
    for(int i =1; i<n; i++){
        if(a[i] < smalest){
            ssmallest = smalest;
            smalest = a[i];
        } else if (a[i] != smalest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}