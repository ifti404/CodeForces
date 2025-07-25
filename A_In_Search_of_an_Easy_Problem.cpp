#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int n, i, r;
    cin >> n;
    while (n--)
    {
        cin >> i;
        if (i == 1)
        {
            cout << "HARD";
            r = 1;
            break;
        }
        else
        {
            r = 0;
        }
    }
    if (r == 0)
    {
        cout << "EASY";
    }
    return 0;
}