#include <iostream>
using namespace std;
 
int main()
{
    int n, a, b, c, sum;
    int accepted = 0;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        sum = a + b + c;
        if (sum > 1)
        {
            accepted++;
        }
    }
    cout << accepted<< endl;
    return 0;
}