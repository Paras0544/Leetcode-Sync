class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;
        int currentend = 0;
        int jumps = 0;

        for(int i=0; i<n-1;i++){
            farthest = max(farthest,nums[i] + i);
        
        if(i == currentend){
            jumps++;
            currentend = farthest;
        }
    }
    return jumps;
    }
};