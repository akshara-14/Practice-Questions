class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int tank_total = 0;
        int cost_total = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            cost_total += cost[i];
            tank_total += gas[i];
        }
        if (tank_total < cost_total)
            return -1;
        int tank = 0, index = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            int consume = gas[i] - cost[i];
            tank += consume;
            if (tank < 0)
            {
                index = i + 1;
                tank = 0;
                continue;
            }
        }
        return index;
    }
};