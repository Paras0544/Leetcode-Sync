class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int el = 0;

        for(int i = 0; i < n; i++){
            el = nums[i] ^ el;
        }
        return el;
        
    }
};