#include <bits/stdc++.h>

using namespace std;

vector<int> permutation;
bool chosen[100] = {false};
void search(int n)
{

    if (permutation.size() == n)
    {
        for (int k = 0; k < permutation.size(); k++)
        {
            cout << permutation[k] << ' ';
        }
        cout << endl;
        //process the permutation
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (chosen[i])
                continue;

            chosen[i] = true;
            permutation.push_back(i);
            search(n);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    //     permutation.push_back(i);
    search(n);

    return 0;
}