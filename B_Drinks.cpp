#include <iostream>
using namespace std;
 
int main()
{
    int n, p;
    float sum = 0;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
 
        cin >> p;
        sum += p;
    }
 
    sum /= n;
    cout << sum << endl;
 
    return 0;
}
