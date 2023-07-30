#include<iostream>
using namespace std;
int main()
{
    int n, rem, cnt=0;
    cin>>n;

    while(n!=0)
    {
        rem = n%10;
        n = n/10;
        cnt++;
        cout<<cnt<<endl;
    }
}