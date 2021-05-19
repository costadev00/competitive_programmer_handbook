// C++ program to find minimum
// number of denominations
#include <bits/stdc++.h>
using namespace std;

// All denominations of Indian Currency
int coins[] = {1, 2, 5, 10, 20,
               50, 100, 500, 1000};
int n = sizeof(coins) / sizeof(coins[0]);

void findMin(int V)
{
    sort(coins, coins + n);

    // Initialize result
    vector<int> ans;

    // Traverse through all denomination
    for (int i = n - 1; i >= 0; i--)
    {

        // Find denominations
        while (V >= coins[i])
        {
            V -= coins[i];
            ans.push_back(coins[i]);
        }
    }

    // Print result
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

// Driver program
int main()
{
    int n = 93;
    cout << "Following is minimal"
         << " number of change for " << n
         << ": ";
    findMin(n);
    return 0;
}
