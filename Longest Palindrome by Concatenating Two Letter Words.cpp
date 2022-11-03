class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        map<string, int> mp;
        int length = 0;
        int answer = 0;
        bool flag = false;

        for (auto word : words)
        {
            mp[word]++;
        }

        for (auto x : mp)
        {
            if (x.first[0] == x.first[1])
            {
                if (x.second % 2 == 1)
                {
                    flag = true;
                    length += (x.second - 1);
                }

                else
                {
                    length += mp[x.first];
                }
                mp.erase(x.first);
            }
            else
            {
                string a = x.first;
                reverse(a.begin(), a.end());
                if (mp.find(a) != mp.end())
                {
                    answer += min(mp[a], x.second) * 4;
                }
                mp.erase(a);
                mp.erase(x.first);
            }
        }
        if (flag)
        {
            return answer + length * 2 + 2;
        }
        return answer + length * 2;
    }
};