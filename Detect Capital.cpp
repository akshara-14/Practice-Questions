class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int count = 0, count1 = 0;
        if (isupper(word[0]))
            count1 = 1;
        for (int i = 1; i < word.size(); i++)
        {
            if (isupper(word[i]) && count1 == 1)
            {
                count += 1;
            }
            else if (isupper(word[i]) && count1 != 1)
            {
                return false;
            }
            else
            {
                continue;
            }
        }
        if ((count1 == 1 && count == (word.size() - 1)) || count == 0)
            return true;
        else
            return false;
    }
};