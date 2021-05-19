//NEED TO BE FIXED
#include <bits/stdc++.h>

using namespace std;
//using bit representation of integers
int main()
{
    vector<int> subset = {0, 1, 2};

    for (int b = 0; b < (1 << subset.size()); b++)
    {
        for (int i = 0; i < subset.size(); i++)
        {
            if (b & (1 << i))
            {
                subset.push_back(i);
            }
        }
    }
    return 0;
}