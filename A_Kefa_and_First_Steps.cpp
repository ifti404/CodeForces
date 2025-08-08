#include <iostream>
using namespace std;

int main()
{
    int n, count = 1, highestCount = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] <= ar[i + 1])
        {
            count++;
        }
        else
        {

            if (count > highestCount)
            {
                highestCount = count;
            }

            count = 1;
        }
    }
    if (count > highestCount)
    {
        highestCount = count;
    }

    cout << highestCount << endl;
}