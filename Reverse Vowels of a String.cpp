bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

class Solution
{
public:
    string reverseVowels(string s)
    {

        int n = s.length();
        int i = 0, j = n - 1;

        while (i < j)
        {
            if (isVowel(s[i]) && isVowel(s[j]))
            {
                swap(s[i], s[j]);
                j--;
                i++;
            }
            else
            {
                if (!isVowel(s[i]))
                {
                    i++;
                }
                if (!isVowel(s[j]))
                {
                    j--;
                }
            }
        }

        return s;
    }
};