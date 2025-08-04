#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0, count = 0;
    int tst = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    sum /= 2;

    sort(ar, ar + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        tst += ar[i];
        count++;
        if (tst > sum)
        {
            cout << count << endl;
            return 0;
        }
    }
}