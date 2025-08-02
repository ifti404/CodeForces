#include <iostream>
#include <algorithm>
using namespace std;

void swapper(int a, int b, int c);

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        swapper(a, b, c);
    }
}

void swapper(int a, int b, int c)
{
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);
    if (c == (a + b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
