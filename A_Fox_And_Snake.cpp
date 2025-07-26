#include <iostream>
using namespace std;
void firstLine(int range);
void secondLine(int range);
void thirdLine(int range);

int main()
{
    int n, m;
    cin >> n >> m;

    int i = 0;
    while (i < n)
    {
        firstLine(m);
        i++;

        if (i >= n)
            break;

        secondLine(m);
        i++;

        if (i >= n)
            break;

        firstLine(m);
        i++;

        if (i >= n)
            break;

        thirdLine(m);
        i++;

        if (i >= n)
            break;
    }
}

void firstLine(int range)
{
    for (int i = 0; i < range; i++)
    {
        cout << "#";
    }

    cout << endl;
}
void secondLine(int range)
{
    for (int i = 0; i < range - 1; i++)
    {
        cout << ".";
    }
    cout << "#" << endl;
}
void thirdLine(int range)

{
    cout << "#";
    for (int i = 1; i < range; i++)
    {
        cout << ".";
    }
    cout << endl;
}
