#include <iostream>
using namespace std;
 
int main()
{
    int n, r = 0;
    cin >> n;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
 
        if (q - p >= 2)
        {
            r++;
        }
    }
    cout << r;
    return 0;
}