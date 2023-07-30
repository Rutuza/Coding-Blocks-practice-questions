#include<iostream>
using namespace std;
int main()
{
    // char a[] = {'H', 'A', 'P', 'P', 'Y'};
    // char b[] = {'M', 'A', 'D', 'D', 'Y', '\0'};
    // cout<<a<<endl;
    // cout<<b<<endl;

    char a[1000];
    cin.getline(a, 1000, '$');
    cout<<a<<endl;
    
return 0;
}