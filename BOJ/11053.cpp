#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n(0);
    cin >> n;
    vector<int> arr(n, 0);
    vector<int> dp(n, 1);
    int y = 0, x = 0;
    for (x = 0; x < n; ++x)
    {
        cin >> arr[x];
    }
    int ans(0);
    for (y = 0; y < n; ++y)
    {
        for (x = 0; x < y; ++x)
        {
            if (arr[x] < arr[y])
            {
                dp[y] = max(dp[y], dp[x] + 1);
            }
        }
        ans = max(ans, dp[y]);
    }
    cout << ans;
}