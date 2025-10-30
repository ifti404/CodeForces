#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int x = s.length();

            if (m < x)
            {

                for (int j = i + 1; j < n; j++)
                {
                    string tmp;
                    cin >> tmp;
                }
                break;
            }
            m -= x;
            count++;
        }

        cout << count << "\n";
    }

    return 0;
}
