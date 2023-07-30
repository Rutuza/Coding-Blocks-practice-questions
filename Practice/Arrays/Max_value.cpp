#include<iostream>
using namespace std;

int max_element(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
           max = arr[i];
        }    
    }
    cout<<max;
return max;
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    max_element(arr, n);
}