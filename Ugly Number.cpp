class Solution
{
public:
    bool isUgly(int n)
    {
        if (n == 0)
            return false;
        do
        {
            int a = n;
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            if (n % 3 == 0)
            {
                n = n / 3;
            }
            if (n % 5 == 0)
            {
                n = n / 5;
            }
            if (n == a && n != 1)
            {
                return false;
            }
        } while (n != 1);
        return true;
    }
};