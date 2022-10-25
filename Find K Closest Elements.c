#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

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