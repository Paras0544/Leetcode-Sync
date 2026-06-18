class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;

        // Count frequencies
        for(int num : nums){
            freq[num]++;
        }

        // {frequency, element}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > minHeap;

        for(auto &it : freq){
            minHeap.push({it.second, it.first});

            // Keep only top k frequencies
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        vector<int> ans;

        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return ans;
    }
};