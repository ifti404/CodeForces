#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    string ans = "";
    for (int i = 0; i < x.size(); i++)
    {
        int init = x[i] - '0';
        int invert = 9 - init;

        ans += min(init, invert) + '0';
    }

    if (ans[0] == '0')
    {
        ans[0] = '9';
    }

    cout << ans;
}
