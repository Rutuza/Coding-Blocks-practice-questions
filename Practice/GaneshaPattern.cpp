

#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    num=num-1;
    
    int mid= (num)/2;
    for(int i =0;i<=num;i++)
    {
        for(int j =0;j<=num;j++)
        {
            if((i==0 && i<=mid) || j==0 || i==num || j==num || i==mid || j==mid)
            {
                cout<<"+";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }    
}