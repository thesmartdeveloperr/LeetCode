class Solution {
public:
    int countRotations(vector<int> arr, int low, int high){
	if (high < low)
		return 0;

	if (high == low)
		return low;

	int mid = low + (high - low)/2; 

	if (mid < high && arr[mid+1] < arr[mid])
	return mid+1;

	if (mid > low && arr[mid] < arr[mid - 1])
	return mid;

	if (arr[high] > arr[mid])
	return countRotations(arr, low, mid-1);
	return countRotations(arr, mid+1, high);
}
int search(vector<int>& nums, int target) {
    int res=-1;
    int pos=countRotations(nums,0,nums.size()-1);
  int low=0,high=pos-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]>target)
        high=mid-1;
        else
        low=mid+1;
    }
    low=pos;
    high=nums.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]>target)
        high=mid-1;
        else
        low=mid+1;
    }
    return res;
    }
};