// Iterative

int search(vector<int> &nums, int target) {
    // Write your code here.
    int low = 0 , high = nums.size() - 1;
    int mid;
    while(low <= high){
        // calculating mid
        mid = low + (high - low) / 2;
        // checking for ans
        if(nums[mid] == target){
            return mid;
        } else if (nums[mid] < target){
            
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Recursive

int binarySearchRecursive(vector<int> &nums, int target, int low, int high){
    // base case
    if(low > high){
        return  -1;
    }
    int mid = low + (high - low) / 2;
    if(target == nums[mid]){
        return mid;
    } else if (target > nums[mid]){
        return binarySearchRecursive(nums, target, mid+1, high);
    } else {
        return binarySearchRecursive(nums, target, low, mid-1);
    }
}