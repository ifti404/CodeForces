#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    int n, attempts=0;
    cin >> n;
 
    while (n!=0 && n >=5)
    {
        n-=5;
        attempts++;
    }
    while (n!=0 && n >=4)
    {
        n-=4;
        attempts++;
    }
    while (n!=0 && n >=3)
    {
        n-=3;
        attempts++;
    }
    while (n!=0 && n >=2)
    {
        n-=2;
        attempts++;
    }
    while (n!=0 && n >=1)
    {
        n-=1;
        attempts++;
    }
    cout << attempts;
    return 0;
}