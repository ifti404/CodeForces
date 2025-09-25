#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int police = 0, crime = 0;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        if (s == -1)
        {
            if (police == 0)
            {
                crime++;
            }
            else
            {
                police--;
            }
        }
        else
        {
            police += s;
        }
    }
    cout << crime << endl;
}