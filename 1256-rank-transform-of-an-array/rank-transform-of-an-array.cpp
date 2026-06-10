class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> dupeArray = arr;

        sort(dupeArray.begin(),dupeArray.end());

        unordered_map<int,int> rankMap;

        int rank = 1;
        for (int num : dupeArray) {
            if (rankMap.find(num) == rankMap.end()) {
                rankMap[num] = rank;
                rank++;
            }
        }
        vector<int> result;
        for (int num : arr) {
            result.push_back(rankMap[num]);
        }
        return result;
    }
};