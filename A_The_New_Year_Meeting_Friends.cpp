#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, x = 0;
    cin >> a >> b >> c;

    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);

    x = (b - a) + (c - b);

    cout << x;
}