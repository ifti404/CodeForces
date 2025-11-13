#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum1 = 0, sum2 = 0, count = 0;
        string n;
        cin >> n;

        for (int i = 1; i <= 3; i++)
        {
            sum1 += n[i - 1] - '0';
            sum2 += n[n.size() - i] - '0';
        }
        if (sum1 == sum2)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}