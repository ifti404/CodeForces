#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    int k,n,w,sum=0,lend=0;
    cin >> k >> n >> w;
 
    for (int i=1; i<=w; i++)
    {
 
        sum+=(i * k);
    }
    lend = sum - n;
    if (lend > 0)
    {
        cout << lend;
    }
    else
    {
        lend = 0;
        cout << lend;
    }
 
    return 0;
}
