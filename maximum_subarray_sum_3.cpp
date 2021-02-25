// the idea here is to calculate, for each array position the maximum sum of a subarray that ends at that position.
//after this the asw for the problem is the maximum of those sums.
// The time complexity is O(n), because of just one loop
// this algorithm is called Kadane's algorithm.
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, best = 0, sum = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int k = 0; k < n; k++)
    {
        sum = (max(array[k], sum + array[k]));
        best = max(best, sum);
    }
    cout << best << "\n";
    return 0;
}