class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max{0}, sum{0};
        for (int i = 0; i < accounts.size(); i++) {
            for (int i2 = 0; i2 < accounts[i].size(); i2++) {
                sum += accounts[i][i2];
            }
            if (sum > max)
                max = sum;
            sum = 0;
        }
        return max;
    }
};