#include <iostream>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long c;

    c = (n + 1) / 2;

    if (k <= c)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << (k - c) * 2;
    }
}
