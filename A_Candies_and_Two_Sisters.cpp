#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cout << (m - 1) / 2 << endl;
    }
}