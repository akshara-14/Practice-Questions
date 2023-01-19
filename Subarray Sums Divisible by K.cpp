class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        vector<int> pref(k, 0);
        int count = 0;
        int sum = 0;
        pref[0]++;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int rem = (sum % k + k) % k;
            count += pref[rem];
            pref[rem]++;
        }
        return count;
    }
};