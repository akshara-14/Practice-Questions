// Given a rectangular cake with height h and width w, and two arrays of integers horizontalCuts and verticalCuts where horizontalCuts[i] is the distance from the top of the rectangular cake to the ith horizontal cut and similarly, verticalCuts[j] is the distance from the left of the rectangular cake to the jth vertical cut.

// Return the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays horizontalCuts and verticalCuts. Since the answer can be a huge number, return this modulo 10^9 + 7.

void merge(int arr[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int maxArea(int h, int w, int *horizontalCuts, int horizontalCutsSize, int *verticalCuts, int verticalCutsSize)
{
    mergeSort(horizontalCuts, 0, horizontalCutsSize - 1);
    mergeSort(verticalCuts, 0, verticalCutsSize - 1);
    long long int maxh = horizontalCuts[0], maxw = verticalCuts[0];
    for (int i = 1; i < horizontalCutsSize; i++)
    {
        if ((long long int)(horizontalCuts[i] - horizontalCuts[i - 1]) > maxh)
        {
            maxh = (long long int)(horizontalCuts[i] - horizontalCuts[i - 1]);
        }
    }
    if ((long long int)(h - horizontalCuts[horizontalCutsSize - 1]) > maxh)
    {
        maxh = (long long int)(h - horizontalCuts[horizontalCutsSize - 1]);
    }
    for (int i = 1; i < verticalCutsSize; i++)
    {
        if ((long long int)(verticalCuts[i] - verticalCuts[i - 1]) > maxw)
        {
            maxw = (long long int)(verticalCuts[i] - verticalCuts[i - 1]);
        }
    }
    if ((long long int)(w - verticalCuts[verticalCutsSize - 1]) > maxw)
    {
        maxw = (long long int)(w - verticalCuts[verticalCutsSize - 1]);
    }
    return (maxh * maxw) % (1000000007);
}