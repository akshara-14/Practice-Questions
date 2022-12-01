class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int n = s.length();

        int count1 = 0, count2 = 0;
        vector<char> c = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for (int i = 0; i < n / 2; i++)
        {
            for (auto x : c)
            {
                if (s[i] == x)
                {
                    count1++;
                    break;
                }
            }
        }
        for (int i = 0; i <= n / 2; i++)
        {

            for (auto x : c)
            {
                if (s[n - i] == x)
                {
                    count2++;
                    break;
                }
            }
        }

        return count1 == count2;
    }
};