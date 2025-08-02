#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string x, y, z, m;
    cin >> x >> y >> z;
    m = x + y;
    sort(z.begin(), z.end());
    sort(m.begin(), m.end());

    if (m == z)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}