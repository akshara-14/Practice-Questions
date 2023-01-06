class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        sort(costs.begin(), costs.end());

        int total = 0, number = 0;
        for (int i = 0; i < costs.size(); i++)
        {
            if (coins >= (costs[i] + total))
            {
                total += costs[i];
                number++;
            }
        }
        return number;
    }
};