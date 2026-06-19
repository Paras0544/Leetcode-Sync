class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int greedIndex = 0;
        int sizeIndex = 0;

        while(greedIndex < n && sizeIndex < m){
            if(s[sizeIndex] >= g[greedIndex]){
                greedIndex++;
            }
            sizeIndex++;
        }
        return greedIndex;
    }
};