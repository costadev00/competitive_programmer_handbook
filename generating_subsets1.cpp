#include <bits/stdc++.h>

using namespace std;

vector<int> subset;

void search(int k, int n)
{
    if (k == n)
    {
        if (subset.size() == 0)
        {
            cout << "{}" << endl;
            return;
        }
        cout << "{";
        for (int i = 0; i < subset.size(); i++)
        {
            if (i + 1 >= subset.size())
            {
                cout << subset[i];
            }
            else
            {
                cout << subset[i] << ",";
            }
        }
        cout << "}\n";
    }
    else
    {
        search(k + 1, n);
        subset.push_back(k);
        search(k + 1, n);
        subset.pop_back();
    }
}

int main()
{
    search(0, 4);
    return 0;
}