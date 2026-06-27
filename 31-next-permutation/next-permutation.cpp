class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // Step 1: Find breakpoint from right
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                index = i;
                break;
            }
        }

        // Step 2: If no breakpoint, reverse entire array
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find next greater element from right
        for(int i = n - 1; i > index; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: Reverse the suffix
        reverse(nums.begin() + index + 1, nums.end());
    }
};