#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            if (i==0 || i == 1)
            {
                cout<<"1";
            }

            else if(i==j)
            {
                cout<<i;
            }
            
            else if(j==0)
            {
                cout<<i;
            }
            else
            {
                cout<<"0";
            }   
           
        }
        cout<<endl;
    }
    
}