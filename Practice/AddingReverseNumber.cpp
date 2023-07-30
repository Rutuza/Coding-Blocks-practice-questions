#include<iostream>
using namespace std;
void reverse1()
{
    int n, rem1, rev1=0;
    cin>>n;
       
        while (n != 0 )
        {
         
            rem1 = n%10;
            rev1 = rev1*10 + rem1;
            n = n/10;
        }
       
        cout<<rev1; 
}  

void reverse2()
{
        int m, rem2, rev2=0;
        cin>>m;
        
        while (m != 0)
        {
            rem2 = m%10;
            rev2 = rev2*10 + rem2;
            m = m/10;
        }
}
    
int main()
{
    reverse1();
    reverse2();
}