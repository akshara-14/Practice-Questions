// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findClosestElements(int *arr, int arrSize, int k, int x, int *returnSize)
{

    *returnSize = k;
    int *result = (int *)malloc(k * sizeof(int));

    int left = 0, right = arrSize - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= x)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    // printf("left = %d, right = %d\n", left, right);
    // here we found the element or the insertion position at left
    // then we expand left and right
    int low = MAX(0, left - k);
    int high = MIN(arrSize - 1, left + k - 1);

    // now x should be between left and right
    while ((high - low + 1) > k)
    {
        if (high > arrSize - 1 || (arr[high] - x) < (x - arr[low]))
        {
            low++;
        }
        else
        {
            high--;
        }
    }

    // printf("low = %d, high = %d\n", low, high);

    for (int i = 0; i < k; i++)
    {
        result[i] = arr[low++];
    }
    return result;
}