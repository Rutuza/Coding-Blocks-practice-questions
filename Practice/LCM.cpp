#include<iostream>
using namespace std;
int main()
{
    int N1, N2;
    cin>>N1>>N2;
    
    for (int i = N1; i <= N1*N2; i++)
    {
        if (i%N1 == 0 && i%N2 == 0)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    
}