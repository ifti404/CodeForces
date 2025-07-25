#include <iostream>
#include <string>
using namespace std;
 
int checker (int sum) {
 string s;
 cin >> s;
 
 if(s=="Tetrahedron"){
    sum+=4;
 }
    else if(s=="Cube"){
        sum+=6;
    }
    else if(s=="Octahedron"){
        sum+=8;
    }
    else if(s=="Dodecahedron"){
        sum+=12;
    }
    else if(s=="Icosahedron"){
        sum+=20;
    }
    return sum;
 }
 
 
 
 
 
int main (){
    int n,sum=0;
    cin >> n;
    for (int i=0; i < n; i++){
     sum = checker(sum);
    }
    cout << sum;
}