#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int zeros = 0, ones = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zeros++;
            ones = 0;
        }
        else if (s[i] == '1')
        {
            zeros = 0;
            ones++;
        }
        if (zeros == 7 || ones == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
