#include <bits/stdc++.h>

using namespace std;

vector<int> permutation = {0, 1, 2, 3};
bool chosen[100] = {false};
int n = permutation.size();
void search()
{

    if (permutation.size() == n)
    {
        // for (int k = 0; i < permutation.size(); k++)
        // {
        cout << "alou\n";
        // }
        //process the permutation
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (chosen[i])
                continue;

            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}
int main()
{

    return 0;
}