#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long colosseum(int N, vector<int> a)
    {

        vector<long long> L(N * 3 + 1), R(N * 3 + 1); // create
        for (int i = 0; i <= 3 * N; ++i)
        {
            L[i] = -1e18, R[i] = 1e18;
        }

        priority_queue<long long, vector<long long>, greater<long long>> minHeap;

        long long sum = 0;
        for (int i = 0; i < 3 * N; ++i)
        {
            minHeap.push(a[i]); // push in queue untill the priority_queue size is less than or equal to N
            sum += a[i];
            if (minHeap.size() > N)
            { // now pop the top of priority_queue if size exceed
                long long v = minHeap.top();
                minHeap.pop();
                sum -= v;
            }
            if (minHeap.size() == N)
                L[i + 1] = sum;
        }

        priority_queue<long long> maxHeap;
        sum = 0;
        for (int j = 0; j < 3 * N; ++j)
        { // same thing we will do here from back
            int i = 3 * N - 1 - j;
            maxHeap.push(a[i]);
            sum += a[i];
            if (maxHeap.size() > N)
            {
                long long v = maxHeap.top();
                maxHeap.pop();
                sum -= v;
            }
            if (maxHeap.size() == N)
                R[j + 1] = sum;
        }

        long long ans = -1e18;
        // iterate over L and R and find the maximum possible value
        for (int a = 0; a <= 3 * N; ++a)
        {
            int b = 3 * N - a;
            ans = max(ans, L[a] - R[b]);
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << obj.colosseum(x, v) << "\n";
}
