#include<iostream>
#include<string>
#include<cmath>
using namespace std ;
int main ()
{
    // code print numbers in descending order
    float a  , b , c ;
    cout << "Enter the first number : " << endl;
    cin >> a ;
    cout << "Enter the second number : " << endl ;
    cin >> b ;
    cout << "Enter the third number : " << endl ;
    cin >> c ;
    if (a<b && a< c){

        cout << a << endl ;
    }
    if (b<a && b < c ) {

        cout << b << endl ;
    }

    if (c<a && c<b ) {

        cout << c << endl ;
    }
return 0 ;
}
