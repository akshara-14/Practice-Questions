class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        map<int, int> tracker; // sorted map

        for (const vector<int> &match : matches)
        {
            tracker[match[0]];
            tracker[match[1]]++;
        }

        vector<vector<int>> answer;
        answer.push_back(vector<int>());
        answer.push_back(vector<int>());

        for (const auto &player : tracker)
        {
            if (player.second == 0)
            {
                answer[0].push_back(player.first);
            }
            else if (player.second == 1)
            {
                answer[1].push_back(player.first);
            }
        }

        return answer;
    }
};