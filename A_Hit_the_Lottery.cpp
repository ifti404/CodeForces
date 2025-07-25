#include <iostream>
using namespace std;
 
//Function Declaration
void counter100(int n);
void counter20(int n);
void counter10(int n);
void counter5(int n);
void counter1(int n);
int main ()
{
    int n;
    cin >> n;
 
    if (n>=100)
    {
        counter100(n);
    }
    else if(n>=20)
    {
        counter20(n);
    }
    else if(n>=10)
    {
        counter10(n);
    }
    else if(n>=5)
    {
        counter5(n);
    }
    else if(n>=1)
    {
        counter1(n);
    }
    return 0;
}
 
void counter100(int n)
{
 
    int count=0;
 
    while(n>=100)
    {
        n-=100;
        count++;
    }
    while(n>=20)
    {
        n-=20;
        count++;
    }
    while(n>=10)
    {
        n-=10;
        count++;
    }
    while(n>=5)
    {
        n-=5;
        count++;
    }
    while(n>=1)
    {
        n-=1;
        count++;
    }
 
    cout << count<< endl;
 
}
 
void counter20(int n)
{
 
    int count=0;
 
    while(n>=20)
    {
        n-=20;
        count++;
    }
    while(n>=10)
    {
        n-=10;
        count++;
    }
    while(n>=5)
    {
        n-=5;
        count++;
    }
    while(n>=1)
    {
        n-=1;
        count++;
    }
 
    cout << count<< endl;
 
}
 
void counter10(int n)
{
 
    int count=0;
 
    while(n>=10)
    {
        n-=10;
        count++;
    }
    while(n>=5)
    {
        n-=5;
        count++;
    }
    while(n>=1)
    {
        n-=1;
        count++;
    }
 
    cout << count<< endl;
 
}
 
void counter5(int n)
{
 
    int count=0;
 
 
    while(n>=5)
    {
        n-=5;
        count++;
    }
    while(n>=1)
    {
        n-=1;
        count++;
    }
 
    cout << count<< endl;
 
}
 
void counter1(int n)
{
 
    int count=0;
 
 
    while(n>=1)
    {
        n-=1;
        count++;
    }
 
    cout << count<< endl;
 
}
