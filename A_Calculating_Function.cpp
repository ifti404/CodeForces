#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    long long int n;
    cin >> n;
 
    if (n % 2 == 0)
    {
        n /= 2;
    }
    else
    {
        n /= -2;
        n -= 1;
    }
    cout << n;
    return 0;
}