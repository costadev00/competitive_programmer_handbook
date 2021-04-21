#include <bits/stdc++.h>

using namespace std;

int cont = 0;
int n = 4;
int collumn[4];
int diag1[4];
int diag2[4];

void search(int y)
{
    if (y == n)
    {
        cont++;
        return;
    }
    for (int x = 0; x < n; x++)
    {
        if (collumn[x] || diag1[x + y] || diag2[x - y + n - 1])
            continue;
        collumn[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1);
        collumn[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
}
int main()
{

    for (int i = 0; i < n; i++)
    {
        collumn[i] = i;
        diag1[i] = i;
        diag2[i] = i;
    }
    search(0);
    cout << cont << endl;
    return 0;
}