#include <iostream>
#include <vector>
using namespace std;

int d5(int n);
int d4(int n);
int d3(int n);
int d2(int n);
int d1(int n);

int main()
{
    int x, n;
    cin >> x;

    vector<int> inputs(x); // Store all inputs

    for (int i = 0; i < x; i++)
    {
        cin >> inputs[i];
    }

    for (int i = 0; i < x; i++)
    {
        n = inputs[i];
        if (n >= 10000)
        {
            d5(n);
        }
        else if (n >= 1000)
        {
            d4(n);
        }
        else if (n >= 100)
        {
            d3(n);
        }
        else if (n > 10)
        {
            d2(n);
        }
        else if (n >= 1)
        {
            d1(n);
        }
    }
}

int d5(int n)
{
    int count = 0;
    int x1, x2, x3, x4, x5;
    x1 = (n / 10000) * 10000;
    x2 = ((n % 10000) / 1000) * 1000;
    x3 = ((n % 1000) / 100) * 100;
    x4 = ((n % 100) / 10) * 10;
    x5 = n % 10;
    int result[5] = {x1, x2, x3, x4, x5};
    for (int i = 0; i < 5; i++)
    {
        if (result[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < 5; i++)
    {
        if (result[i] != 0)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}
int d4(int n)
{
    int count = 0;
    int x1, x2, x3, x4;
    x1 = (n / 1000) * 1000;
    x2 = ((n % 1000) / 100) * 100;
    x3 = ((n % 100) / 10) * 10;
    x4 = n % 10;
    int result[4] = {x1, x2, x3, x4};
    for (int i = 0; i < 4; i++)
    {
        if (result[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < 4; i++)
    {
        if (result[i] != 0)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}
int d3(int n)
{
    int count = 0;
    int x1, x2, x3;
    x1 = (n / 100) * 100;
    x2 = ((n % 100) / 10) * 10;
    x3 = n % 10;
    int result[3] = {x1, x2, x3};
    for (int i = 0; i < 3; i++)
    {
        if (result[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < 3; i++)
    {
        if (result[i] != 0)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}
int d2(int n)
{
    int count = 0;
    int x1, x2;
    x1 = (n / 10) * 10;
    x2 = n % 10;
    int result[2] = {x1, x2};
    for (int i = 0; i < 2; i++)
    {
        if (result[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < 2; i++)
    {
        if (result[i] != 0)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}
int d1(int n)
{
    cout << 1 << endl;
    cout << n << endl;
}
