#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"testcases?";
    cin>>t;

    int n;
    cout<<"Enter size: ";
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout<<"sum = "<<sum;
    
    
    
}