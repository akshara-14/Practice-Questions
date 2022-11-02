class Solution
{
public:
    int minMutation(string start, string end, vector<string> &bank)
    {
        queue<string> queue;
        unordered_set<string> visit;
        queue.push(start);
        visit.insert(start);

        int count = 0;
        while (!queue.empty())
        {
            int inQueue = queue.size();

            for (int i = 0; i < inQueue; i++)
            {
                string node = queue.front();
                queue.pop();

                if (node == end)
                {
                    return count;
                }

                for (char c : "ACGT")
                {
                    for (int j = 0; j < node.size(); j++)
                    {
                        string neighbour = node;
                        neighbour[j] = c;
                        if (!visit.count(neighbour) && find(bank.begin(), bank.end(), neighbour) != bank.end())
                        {
                            queue.push(neighbour);
                            visit.insert(neighbour);
                        }
                    }
                }
            }
            count++;
        }
        return -1;
    }
};