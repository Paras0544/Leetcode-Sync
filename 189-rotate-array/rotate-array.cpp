class Solution {
public:
    void ReverseArray(vector<int>&nums, int start , int end){
        while(start <= end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
public:
    vector<int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == 0 || n == 0) return nums;
        k = k % n;
        ReverseArray(nums,0,n-1);
        ReverseArray(nums,0,k-1);
        ReverseArray(nums,k,n-1);
        return nums;
    }
};