// it is easy to make algo 1 more efficient by removing one loop from it.
//This is possible by calculating the sum at the same time when the right end of the subarray moves. The result is the following code:
// the time complexity is O(n²), because of the 2 nested loops
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, best = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int a = 0; a < n; a++)
    {
        int sum = 0;
        for (int b = a; b < n; b++)
        {
            sum += array[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
    return 0;
}