#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i<n; i++)
    {
        if (arr[i] == n/2)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}