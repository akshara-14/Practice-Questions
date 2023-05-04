class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        queue<int> q1, q2;
        int n = senate.length();

        for (int i = 0; i < n; i++)
        {
            (senate[i] == 'R') ? q1.push(i) : q2.push(i);
        }

        while (!q1.empty() && !q2.empty())
        {
            int q1_front = q1.front(), q2_front = q2.front();
            q1.pop(), q2.pop();
            (q1_front < q2_front) ? (q1.push(q1_front + n)) : (q2.push(q2_front + n));
        }
        string ans;
        (q1.size() > q2.size()) ? ans = "Radiant" : ans = "Dire";
        return ans;
    }
};