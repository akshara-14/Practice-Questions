// An n-bit gray code sequence is a sequence of 2n integers where:

// Every integer is in the inclusive range [0, 2n - 1],
// The first integer is 0,
// An integer appears no more than once in the sequence,
// The binary representation of every pair of adjacent integers differs by exactly one bit, and
// The binary representation of the first and last integers differs by exactly one bit.
// Given an integer n, return any valid n-bit gray code sequence.

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *grayCode(int n, int *returnSize)
{
    int tt = (int)pow(2, n);
    int *ans = (int *)malloc(sizeof(int) * tt);
    int dis = 1;
    int two = 2;
    if (n == 0)
    {
        ans[0] = 0;
        *returnSize = 1;
        return ans;
    }
    ans[0] = 0;
    ans[1] = 1;

    while (two < tt)
    {
        dis = 1;
        for (int i = two; i != two * 2; i++)
        {
            ans[i] = ans[two - dis] + two;
            dis++;
        }
        two *= 2;
    }
    *returnSize = tt;
    return ans;
}