#include <bits/stdc++.h>
using namespace std;

int maxGap(int N, vector<int> &nums)
{
    int i;
    if (N < 2)
        return 0;
    int minEle = INT_MAX, maxEle = INT_MIN;
    for (i = 0; i < N; i++)
    {
        minEle = min(minEle, nums[i]);
        maxEle = max(maxEle, nums[i]);
    }
    // if minEle equals to maxEle means there is no gap and all elements are equal.So max gap b/w to adjacent element would be 0.
    if (minEle == maxEle)
        return 0;

    int gap = (maxEle - minEle) / (N - 1);
    // if it is not prefectly divisible than we need to add 1 to the gap.
    if ((maxEle - minEle) % (N - 1) != 0)
        gap++;

    vector<int> minNums(N, INT_MAX);
    vector<int> maxNums(N, INT_MIN);
    for (i = 0; i < N; i++)
    {
        int bkt = (nums[i] - minEle) / gap;
        minNums[bkt] = min(minNums[bkt], nums[i]);
        maxNums[bkt] = max(maxNums[bkt], nums[i]);
    }

    int ans = INT_MIN;
    int prev = INT_MIN;
    // traverse through n buckets
    for (i = 0; i < N; i++)
    {
        // if bucket empty continue
        if (maxNums[i] == INT_MIN)
            continue;
        // if it's the first bucket.

        if (prev == INT_MIN)
            prev = maxNums[i];
        // finding the max consecutive diff of current bucket min ele and prev bucket max element
        ans = max(ans, minNums[i] - prev);
        // update current max as prev;
        prev = maxNums[i];
    }
    return ans;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> nums(N);
        int i;
        for (i = 0; i < N; i++)
        {
            cin >> nums[i];
        }
        int ans = maxGap(N, nums);
        cout << ans << "\n";
    }
    return 0;
}