#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    int temp;
    for (int i = 0; i < N; i++)
    {
        temp = i+1;

        for (int j = 0; j < N; j++)
        {
           if(i<=j){
            cout<<temp<<" ";
            temp++;
           }
           else
           {
            cout<<temp<<" ";
           }
        }
        cout<<endl;
    }
    
}