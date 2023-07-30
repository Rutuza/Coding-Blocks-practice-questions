#include<iostream>
using namespace std;
int main()
{
    int n, j;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        // cout<<endl;
        // for (j = 0; j <= i; j++)
        // {
        //     cout<<" ";
        // }
        for (int k = n-1; k >= i; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
