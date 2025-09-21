#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int slice = c * d;
    int drink = k * l;

    // drnk
    int drnk = drink / nl;
    int salt = p / np;

    cout << min(drnk, min(slice, salt)) / n;

    return 0;
}