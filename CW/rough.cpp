#include<iostream>
using namespace std;
int main()
{
    int n, no=1;
    cout<<"Enter rows: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<no<<" ";
            no++;
        }
        cout<<endl;
    }
    
}