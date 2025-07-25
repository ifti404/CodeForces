#include <iostream>
using namespace std;
 
int main()
{
    int n, h, a, width = 0;
    cin >> n >> h;
 
    for (int i = 0; i < n; i++)
    {
 
        cin >> a;
 
        if (a > h)
        {
            width += 2;
        }
        else
            width++;
    }
 
    cout << width;
    return 0;
}