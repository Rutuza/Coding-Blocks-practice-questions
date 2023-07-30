#include<iostream>
using namespace std;
int main()
{
    int N1, N2;
    cin>>N1;
    cin>>N2;

    for (int i = 1; i <= N1; i++)
    {
        int n = (3*(i)+2);
        if (n%N2 != 0)
        {
            cout<<n<<endl;
        }
        else
        {
            N1++;
        }
        
    }
    
}