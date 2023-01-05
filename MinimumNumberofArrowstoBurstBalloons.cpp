class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end());
        int end = points[0][1];
        int arrow = 1; // first interval we have to select
        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][0] > end)
            {
                arrow++;
                end = points[i][1];
            }
            end = min(points[i][1], end);
        }
        return arrow;
    }
};