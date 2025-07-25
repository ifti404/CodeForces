#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    int lim,bob, yr =0;
    cin >>lim >> bob;
 
    for(int i = 0; i <100; i++)
    {
        lim*=3;
        bob*=2;
        yr++;
 
        if(lim > bob)
        {
            break;
        }
 
    }
 
    cout << yr;
 
 
    return 0;
}