
// C++ program to illustrate
// working with integers in
// power function
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    pow(2,2);
    // Using typecasting for
    // integer result
    a = (int)(pow(5, 2) + 0.5);
    b = round(pow(5,2));
    cout << a << endl << b ;
  
    return 0;
}