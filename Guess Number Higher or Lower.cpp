/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        long num = 1;
        while (num <= n)
        {
            int x = (num + n) / 2;
            int m = guess(x);
            if (m == 0)
            {
                return x;
            }
            else if (m == 1)
            {
                num = x + 1;
            }
            else if (m == -1)
            {
                n = x - 1;
            }
        }
        return -1;
    }
};