#include <iostream>
using namespace std;

int main()
{
    // 1900+=,1899-1600,1599 - 1400,1399-
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        if (d >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (d >= 1600)
        {
            cout << "Division 2" << endl;
        }
        else if (d >= 1400)
        {
            cout << "Division 3" << endl;
        }
        else
        {
            cout << "Division 4" << endl;
        }
    }
}