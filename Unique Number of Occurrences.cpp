class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int n = arr.size();
        unordered_map<int, int> mp;
        unordered_set<int> s;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (auto it : mp)
        {
            if (s.count(it.second))
                return false;

            s.insert(it.second);
        }

        return true;
    }
};