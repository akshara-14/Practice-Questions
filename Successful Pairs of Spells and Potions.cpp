class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
        int n = s.size(), m = p.size();
        sort(p.begin(), p.end());
        vector<int> res(n);
        for (int i = 0; i < n; i += 1) {
            long long x = (success + s[i] - 1) / s[i];
            if (x > p.back()) continue;
            auto it = lower_bound(p.begin(), p.end(), (int)x);
            res[i] = m - (it - p.begin());
        }
        return res;
    }
};