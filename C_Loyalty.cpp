#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int s = 0;
    int loyalLvl = 0;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        int p = ar[i];
        s += p;
        int loyalLvl = s / x;
        if (loyalLvl)
    }

    return 0;
}