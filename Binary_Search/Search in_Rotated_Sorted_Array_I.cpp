/*

link- https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

*/

int search(vector<int>& arr, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k)
            return i;
    }
    return -1;
}


/////////////////////////////////////////

int search(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return mid;

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;
}
