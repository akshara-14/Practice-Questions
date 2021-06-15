// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
// Your task is simple. Given a string, you need to tell if it is a lapindrome.

#include <string.h>
int main()
{
    int f, t, mid, len;
    char arr[1000];
    int left[125], right[125];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        f = 0;
        scanf("%s", arr);
        memset(left, 0, sizeof(left));
        memset(right, 0, sizeof(right));
        len = strlen(arr);
        for (int i = 0; i < len / 2; i++)
            left[arr[i]]++;
        for (int i = (len + 1) / 2; i < len; i++)
            right[arr[i]]++;
        for (int i = 0; i < strlen(arr); i++)
        {
            if (left[arr[i]] != right[arr[i]])
                f++;
            break;
        }
        if (f == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}