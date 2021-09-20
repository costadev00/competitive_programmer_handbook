#include <bits/stdc++.h>
using namespace std;

// Faz a busca da soma de um intervalo em O(1)
// sum(a,b) = sum(0,b) - sum(0,a-1)

int main()
{
    vector<int> vet = {1, 3, 4, 8, 6, 1, 4, 2};
    vector<int> arr;
    int acm = 0;
    for (int i = 0; i < vet.size(); i++)
    {
        acm += vet[i];
        arr.push_back(acm);
    }
    int a, b;
    cin >> a >> b;
    cout << arr[b] - arr[a - 1] << endl;
    return 0;
}