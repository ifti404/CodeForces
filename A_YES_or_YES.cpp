#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (auto &c : s)
        {
            c = tolower(c);
        }
        if (s == "yes")
        {

            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}