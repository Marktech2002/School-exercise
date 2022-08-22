#include<iostream>
#include<string>
#include<cmath>
using namespace std;




int main ()
{
    int name = 1;
     for(int i = 1 ; i <= 10; i++) {
         // vibes 
            for(int j = 1; j < i; j++) {
             cout << "*";
            }
     cout << "*"<< endl;
     }

     int n = 1 ;
     while(n<=50) {
        if(n%2 != 0) {
            cout<<"odd"<<n <<endl;
        }
        n++;
     }

     return 0;
}




